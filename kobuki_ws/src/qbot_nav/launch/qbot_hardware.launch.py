import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import TimerAction
from launch_ros.actions import Node

def generate_launch_description():
    qbot_nav_share = get_package_share_directory('qbot_nav')
    slam_config_path = os.path.join(qbot_nav_share, 'config', 'slam_toolbox_params.yaml')

    # 1. Kobuki Base Driver
    kobuki_driver = Node(
        package='kobuki_node',
        executable='kobuki_ros_node',
        name='kobuki_ros_node',
        output='screen',
        parameters=[{'device_port': '/dev/kobuki'}] 
    )

    # 2. LD19 LiDAR Driver
    lidar_driver = Node(
        package='ldlidar_stl_ros2',
        executable='ldlidar_stl_ros2_node',
        name='ldlidar_stl_ros2_node',
        output='screen',
        parameters=[{
            'product_name': 'LDLiDAR_LD19',
            'topic_name': 'scan',
            'frame_id': 'laser_link',
            'port_name': '/dev/lidar',   
            'port_baudrate': 230400        
        }]
    )

    # 3. TF Bridge: Connect Kobuki's 'base' to SLAM's 'base_link'
    base_tf = Node(
        package='tf2_ros',
        executable='static_transform_publisher',
        arguments=['0.0', '0.0', '0.0', '0.0', '0.0', '0.0', 'base', 'base_link']
    )

    # 4. TF Bridge: Connect 'base_link' to the LiDAR
    laser_tf = Node(
        package='tf2_ros',
        executable='static_transform_publisher',
        arguments=['0.0', '0.0', '0.14', '0.0', '0.0', '0.0', 'base_link', 'laser_link']
    )

    # 5. SLAM Toolbox (Starts Asleep)
    slam_node = Node(
        package='slam_toolbox',
        executable='async_slam_toolbox_node',
        name='slam_toolbox',
        output='screen',
        parameters=[
            slam_config_path,
            {
                'use_sim_time': False, 
                'mode': 'mapping',
                'base_frame': 'base_link',   # <--- FORCING REAL HARDWARE FRAMES
                'odom_frame': 'odom',        # <--- FORCING REAL HARDWARE FRAMES
                'map_frame': 'map',          # <--- FORCING REAL HARDWARE FRAMES
                'scan_topic': '/scan'        # <--- FORCING REAL HARDWARE FRAMES
            }
        ],
    )

    # 6. The Alarm Clock (Wakes up SLAM after 5 seconds)
    lifecycle_manager = TimerAction(
        period=5.0,
        actions=[
            Node(
                package='nav2_lifecycle_manager',
                executable='lifecycle_manager',
                name='lifecycle_manager_slam',
                output='screen',
                parameters=[{
                    'use_sim_time': False,
                    'autostart': True,
                    'node_names': ['slam_toolbox'],
                    'bond_timeout': 0.0,
                }],
            )
        ]
    )

    slam_pose_node = Node(
        package='qbot_nav',
        executable='slam_pose_publisher',
        name='slam_pose_publisher',
        parameters=[{'use_sim_time': False}],
        output='screen',
    )

    navigation_server = Node(
        package='qbot_nav',
        executable='navigation_server',
        name='navigation_server',
        parameters=[{'use_sim_time': False}],
        output='screen',
    )

    qbot_controller = Node(
        package='qbot_nav',
        executable='qbot_controller',
        name='qbot_controller',
        parameters=[{'use_sim_time': False}],
        output='screen',
    )

    return LaunchDescription([
        kobuki_driver,
        lidar_driver,
        base_tf,       
        laser_tf,
        slam_node,
        lifecycle_manager, 
        slam_pose_node,
        navigation_server,
        qbot_controller
    ])
