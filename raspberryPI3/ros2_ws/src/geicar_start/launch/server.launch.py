from launch import LaunchDescription
from launch_ros.actions import Node
import os
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
    ld = LaunchDescription()

    http_node = Node(
        package="http",
        executable="__init__.py",
        emulate_tty=True
    )


    config_dir = os.path.join(get_package_share_directory('imu_filter_madgwick'), 'config')

    ld.add_action(http_node)
    return ld