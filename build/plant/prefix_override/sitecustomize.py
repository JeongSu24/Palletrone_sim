import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/parkjeongsu/ros2_ws/src/Palletrone_arm/install/plant'
