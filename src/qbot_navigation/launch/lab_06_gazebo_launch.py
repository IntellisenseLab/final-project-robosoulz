import os

from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from ament_index_python.packages import get_package_share_directory

from launch_ros.actions import Node


def generate_launch_description():

    qbot_share = get_package_share_directory('qbot_description')

    gazebo_launch_path = os.path.join(
        qbot_share,
        'launch',
        'gazebo.launch.py'
    )

    gazebo = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(gazebo_launch_path)
    )

    bridge = Node(
        package='ros_gz_bridge',
        executable='parameter_bridge',
        output='screen',
        arguments=[
            '/model/qbot/cmd_vel@geometry_msgs/msg/Twist@gz.msgs.Twist',
            '/model/qbot/odometry@nav_msgs/msg/Odometry@gz.msgs.Odometry',
        ],
    )

    navigation_server = Node(
        package='lab_06',
        executable='navigation_server',
        output='screen',
        remappings=[
            ('/odom', '/model/qbot/odometry'),
        ],
    )

    qbot_controller = Node(
        package='lab_06',
        executable='qbot_controller',
        output='screen',
        remappings=[
            ('/odom', '/model/qbot/odometry'),
            ('/cmd_vel', '/model/qbot/cmd_vel'),
        ],
    )

    return LaunchDescription([
        gazebo,
        bridge,
        navigation_server,
        qbot_controller,
    ])