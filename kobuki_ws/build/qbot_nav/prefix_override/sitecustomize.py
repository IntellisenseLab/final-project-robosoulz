import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/abdulrafi/Desktop/ROS2_Final_Project/kobuki_ws/install/qbot_nav'
