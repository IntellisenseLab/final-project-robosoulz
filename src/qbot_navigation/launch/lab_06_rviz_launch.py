from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node

from ament_index_python.packages import get_package_share_directory
import os

def generate_launch_description():
    # Launch arguments (so we can test different configs easily)
    step_size = LaunchConfiguration('step_size')
    noise_sigma = LaunchConfiguration('noise_sigma')
    publish_rate = LaunchConfiguration('publish_rate')
    goal_tolerance = LaunchConfiguration('goal_tolerance')
    feedback_rate = LaunchConfiguration('feedback_rate')

    # qbot_description paths
    qbot_share = get_package_share_directory('qbot_description')
    urdf_path = os.path.join(qbot_share, 'urdf', 'qbot.urdf')
    rviz_path = os.path.join(qbot_share, 'rviz', 'qbot.rviz')

    # Read URDF and publish as robot_description parameter (recommended)
    with open(urdf_path, 'r') as f:
        robot_desc = f.read()

    return LaunchDescription([
        DeclareLaunchArgument('step_size', default_value='0.5'),
        DeclareLaunchArgument('noise_sigma', default_value='0.1'),
        DeclareLaunchArgument('publish_rate', default_value='10.0'),
        DeclareLaunchArgument('goal_tolerance', default_value='2.0'),
        DeclareLaunchArgument('feedback_rate', default_value='4.0'),

        Node(
            package='robot_state_publisher',
            executable='robot_state_publisher',
            name='robot_state_publisher',
            output='screen',
            parameters=[{'robot_description': robot_desc}],
        ),

        Node(
            package='lab_06',
            executable='navigation_server',
            name='navigation_server',
            output='screen',
            parameters=[{
                'goal_tolerance': goal_tolerance,
                'feedback_rate': feedback_rate,
            }]
        ),

        Node(
            package='lab_06',
            executable='odom_node',
            name='odom_node',
            output='screen',
            parameters=[{
                'step_size': step_size,
                'noise_sigma': noise_sigma,
                'publish_rate': publish_rate,

                'odom_frame': 'odom',
                'base_frame': 'base_link',
                'left_wheel_joint': 'wheel_left_joint',
                'right_wheel_joint': 'wheel_right_joint',
                'wheel_radius': 0.05,
                'wheel_separation': 0.386,
            }]
        ),

        Node(
            package='lab_06',
            executable='mapper_node',
            name='mapper_node',
            output='screen',
        ),

        Node(
            package='rviz2',
            executable='rviz2',
            name='rviz2',
            output='screen',
            arguments=['-d', rviz_path],
        ),
    ])
