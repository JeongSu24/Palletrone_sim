This first version is developed by <https://github.com/Ryung-coding>

## Code Structure

```text
Sim_palletrone/
└── src/
    ├── palletrone_cmd/
    │   ├── CMakeLists.txt
    │   ├── launch/
    │   │   ├── arm_launch.py
    │   │   └── pt_launch.py
    │   ├── package.xml
    │   └── src/
    │       ├── attitude_sweep_cmd.cpp
    │       └── position_cmd.cpp
    │
    ├── palletrone_controller/
    │   ├── CMakeLists.txt
    │   ├── package.xml
    │   └── src/
    │       ├── allocator_controller.cpp
    │       └── wrench_controller.cpp
    │
    ├── palletrone_interfaces/
    │   ├── CMakeLists.txt
    │   ├── msg/
    │   │   ├── AttitudeCmd.msg
    │   │   ├── Cmd.msg
    │   │   ├── Input.msg
    │   │   ├── PalletroneState.msg
    │   │   └── Wrench.msg
    │   └── package.xml
    │
    └── plant/
        ├── plant/
        │   ├── __init__.py
        │   ├── plant.py
        │   └── __pycache__/
        │       ├── __init__.cpython-310.pyc
        │       └── plant.cpython-310.pyc
        ├── resource/
        ├── test/
        ├── setup.cfg
        └── setup.py
