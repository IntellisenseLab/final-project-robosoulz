import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/birajith/Documents/Robotics/final-project-robosoulz/install/qbot_navigation'
