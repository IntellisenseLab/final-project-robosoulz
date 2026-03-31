import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import ExecuteProcess, RegisterEventHandler, SetEnvironmentVariable, TimerAction
from launch.event_handlers import OnProcessStart
from launch_ros.actions import Node


def generate_launch_description():
    pkg_share = get_package_share_directory('qbot_description')

    urdf_file = os.path.join(pkg_share, 'urdf', 'qbot.urdf')
    world_file = os.path.join(pkg_share, 'sdf', 'qbot_world.sdf')
    rviz_file = os.path.join(pkg_share, 'rviz', 'qbot.rviz')

    with open(urdf_file, 'r') as f:
        robot_description_content = f.read()

    # Gazebo Harmonic system plugin path
    gz_sim_system_plugin_path = SetEnvironmentVariable(
        name='GZ_SIM_SYSTEM_PLUGIN_PATH',
        value='/opt/ros/jazzy/lib'
    )

    # Gazebo Fortress system plugin path
    # set_ign_plugin_path = SetEnvironmentVariable(
    #     name='IGN_GAZEBO_SYSTEM_PLUGIN_PATH',
    #     value='/opt/ros/humble/lib'
    # )

    # Jazzy
    # ld_library_path = SetEnvironmentVariable(
    #     name='LD_LIBRARY_PATH',
    #     value='/opt/ros/jazzy/lib:/usr/lib/x86_64-linux-gnu'
    # )

    # Harmonic
    # set_ld_library_path = SetEnvironmentVariable(
    #     name='LD_LIBRARY_PATH',
    #     value='/opt/ros/humble/lib:/usr/lib/x86_64-linux-gnu'
    # )

    robot_state_publisher = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        name='robot_state_publisher',
        output='screen',
        parameters=[
            {'robot_description': robot_description_content},
            {'use_sim_time': True}
        ]
    )

    # Gazebo Harmonic
    gazebo = ExecuteProcess(
        cmd=['gz', 'sim', '-r', world_file],
        output='screen'
    )

    # Gazebo Fortress
    # gazebo = ExecuteProcess(
    #     cmd=['ign', 'gazebo', world_file],
    #     output='screen'
    # )

    rviz = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        output='screen',
        arguments=['-d', rviz_file],
        parameters=[{'use_sim_time': True}]
    )

    bridge = Node(
        package='ros_gz_bridge',
        executable='parameter_bridge',
        arguments=[
            '/clock@rosgraph_msgs/msg/Clock[gz.msgs.Clock',
            '/lidar@sensor_msgs/msg/LaserScan@gz.msgs.LaserScan',
            # '/lidar@sensor_msgs/msg/LaserScan[ignition.msgs.LaserScan]',
            '--ros-args', '-r', '/lidar:=/scan'
        ],
        output='screen'
    )

    joint_state_broadcaster_spawner = Node(
        package='controller_manager',
        executable='spawner',
        arguments=['joint_state_broadcaster'],
        output='screen'
    )

    diff_drive_controller_spawner = Node(
        package='controller_manager',
        executable='spawner',
        arguments=['diff_drive_controller'],
        output='screen'
    )

    delayed_joint_state_broadcaster = RegisterEventHandler(
        OnProcessStart(
            target_action=gazebo,
            on_start=[
                TimerAction(
                    period=8.0,
                    actions=[joint_state_broadcaster_spawner]
                )
            ]
        )
    )

    delayed_diff_drive_controller = RegisterEventHandler(
        OnProcessStart(
            target_action=gazebo,
            on_start=[
                TimerAction(
                    period=10.0,
                    actions=[diff_drive_controller_spawner]
                )
            ]
        )
    )

    return LaunchDescription([
        gz_sim_system_plugin_path,
        # ld_library_path,
        # set_ign_plugin_path,
        # set_ld_library_path,
        robot_state_publisher,
        gazebo,
        rviz,
        bridge,
        delayed_joint_state_broadcaster,
        delayed_diff_drive_controller,
    ])