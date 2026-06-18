import os

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from ament_index_python.packages import get_package_share_directory
from launch.substitutions import LaunchConfiguration
from launch.actions import ExecuteProcess, SetEnvironmentVariable


def generate_launch_description():
    mode = 'day' # Change mode
    package_dir = get_package_share_directory('aws_robomaker_racetrack_world')
    world = LaunchConfiguration('world')

    model_path = os.path.join(package_dir, 'models')

    gazebo_server_cmd_line = [
        'gz', 'sim', '-r', '-v4', world]

    gazebo = ExecuteProcess(
        cmd=gazebo_server_cmd_line, output='screen')
    
    return LaunchDescription([
        SetEnvironmentVariable('GZ_SIM_RESOURCE_PATH', model_path),
        DeclareLaunchArgument(
          'world',
          default_value=[os.path.join(package_dir, 'worlds', 'racetrack_' + mode + '.world'), ''],
          description='SDF world file'),
        gazebo
    ])


if __name__ == '__main__':
    generate_launch_description()
