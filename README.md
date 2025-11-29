This first version is develope by https://github.com/Ryung-coding


Code Structure
├── palletrone_cmd
│   ├── CMakeLists.txt
│   ├── launch
│   │   ├── arm_launch.py
│   │   └── pt_launch.py
│   ├── package.xml
│   └── src
│       ├── attitude_sweep_cmd.cpp
│       └── position_cmd.cpp
├── palletrone_controller
│   ├── CMakeLists.txt
│   ├── package.xml
│   └── src
│       ├── allocator_controller.cpp
│       └── wrench_controller.cpp
├── palletrone_interfaces
│   ├── CMakeLists.txt
│   ├── msg
│   │   ├── AttitudeCmd.msg
│   │   ├── Cmd.msg
│   │   ├── Input.msg
│   │   ├── PalletroneState.msg
│   │   └── Wrench.msg
│   └── package.xml
└── plant
    ├── package.xml
    ├── plant
    │   ├── __init__.py
    │   ├── plant.py
    │   └── __pycache__
    │       ├── __init__.cpython-310.pyc
    │       └── plant.cpython-310.pyc
    ├── resource
    │   └── plant
    ├── setup.cfg
    ├── setup.py
    ├── test
    │   ├── test_copyright.py
    │   ├── test_flake8.py
    │   └── test_pep257.py
    └── xml
        ├── BODY.stl
        ├── Palletrone.xml
        ├── PROP.stl
        ├── scene.xml
        └── STLchanger.py
