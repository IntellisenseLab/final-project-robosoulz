import os

from launch import LaunchDescription
from launch.actions import ExecuteProcess
from ament_index_python.packages import get_package_share_directory


def generate_launch_description():
    pkg_share = get_package_share_directory('qbot_description')
    world_path = os.path.join(pkg_share, 'sdf', 'qbot_world.sdf')

    gazebo = ExecuteProcess(
        # cmd=['ign', 'gazebo', world_path],
        cmd=['gz', 'sim', '-r', world_path],
        output='screen'
    )

    return LaunchDescription([
        gazebo
    ])