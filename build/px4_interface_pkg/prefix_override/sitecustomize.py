import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/yigit/tukan_ros2_ws/install/px4_interface_pkg'
