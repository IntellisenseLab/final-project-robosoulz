from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


def generate_launch_description():

    step_size = LaunchConfiguration('step_size')
    noise_sigma = LaunchConfiguration('noise_sigma')
    publish_rate = LaunchConfiguration('publish_rate')
    goal_tolerance = LaunchConfiguration('goal_tolerance')
    feedback_rate = LaunchConfiguration('feedback_rate')

    return LaunchDescription([
        DeclareLaunchArgument('step_size', default_value='0.5'),
        DeclareLaunchArgument('noise_sigma', default_value='0.1'),
        DeclareLaunchArgument('publish_rate', default_value='10.0'),
        DeclareLaunchArgument('goal_tolerance', default_value='2.0'),
        DeclareLaunchArgument('feedback_rate', default_value='4.0'),

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
            }]
        ),

        Node(
            package='lab_06',
            executable='mapper_node',
            name='mapper_node',
            output='screen',
        ),
    ])