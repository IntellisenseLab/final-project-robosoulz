import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node


def generate_launch_description():
    qbot_description_share = get_package_share_directory('qbot_description')
    lab06_share = get_package_share_directory('lab_06')

    base_launch = os.path.join(
        qbot_description_share,
        'launch',
        'gazebo_ros2_control.launch.py'
    )

    slam_params = os.path.join(
        lab06_share,
        'config',
        'slam_toolbox_params.yaml'
    )

    include_base = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(base_launch)
    )

    navigation_server = Node(
        package='lab_06',
        executable='navigation_server',
        name='navigation_server',
        output='screen',
        parameters=[{'use_sim_time': True}],
        remappings=[
            ('/odom', '/diff_drive_controller/odom'),
            ('/cmd_vel', '/diff_drive_controller/cmd_vel'),
        ]
    )

    qbot_controller = Node(
        package='lab_06',
        executable='qbot_controller',
        name='qbot_controller',
        output='screen',
        parameters=[{'use_sim_time': True}],
        remappings=[
            ('/odom', '/diff_drive_controller/odom'),
            ('/cmd_vel', '/diff_drive_controller/cmd_vel'),
        ]
    )

    slam_toolbox_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(
                get_package_share_directory('slam_toolbox'),
                'launch',
                'online_async_launch.py'
            )
        ),
        launch_arguments={
            'use_sim_time': 'true',
            'slam_params_file': slam_params
        }.items()
    )

    return LaunchDescription([
        include_base,
        navigation_server,
        qbot_controller,
        slam_toolbox_launch,
    ])