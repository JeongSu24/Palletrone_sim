
</head>
<body>

<h1>T-Pam Simulator</h1>

<section>
  <p>
    This project is developed by <a href="https://mrl.seoultech.ac.kr/index.do" target="_blank" rel="noopener">SeoulTech MRL</a>
  </p>

  <p>
    <strong>Palletrone</strong> is a compound of <em>Pallet</em> and <em>Drone</em>, designed as a fully-actuated multirotor platform.
    It enables stable cargo transportation without undesired attitude changes, overcoming the limitations of underactuated multirotors.
  </p>
</section>

<h2>System Configuration</h2>

<section>
  <div class="figure">
    <img src="https://github.com/user-attachments/assets/91fcdd08-1d03-40fe-806c-e38a8c415a63" alt="Image"  width="600">

  </div>

  <h3>Parameters</h3>
  <table>
    <thead>
      <tr><th>Symbol</th><th>Variable</th><th>Description</th></tr>
    </thead>
    <tbody>
      <tr><td><strong>m</strong></td><td><code>m</code></td><td><strong>Palletrone mass</strong></td></tr>
      <tr><td><strong>ζ</strong></td><td><code>zeta</code></td><td>Force-to-yaw torque transform ratio</td></tr>
      <tr><td><strong>r</strong></td><td><code>r</code></td><td><strong>Moment arm</strong> (Actual hardware arm length = √2·<em>r</em>)</td></tr>
      <tr><td><strong>r<sub>z</sub></strong></td><td><code>r_z</code></td><td><strong>z-axis distance</strong> between IMU (center) and thruster</td></tr>
    </tbody>
  </table>
</section>



<img src="https://github.com/user-attachments/assets/37f021dd-1094-4c5a-b9f0-36eca17d0ba3" alt="Image"  width="1000">


<section>
  <pre><code>
palletrone_arm/
└── src
    ├── MUJOCO_LOG.TXT
    ├── palletrone_cmd
    │   ├── CMakeLists.txt
    │   ├── launch
    │   │   └── pt_launch.py
    │   ├── package.xml
    │   └── src
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
    │   │   ├── ArmCmd.msg
    │   │   ├── Cmd.msg
    │   │   ├── Input.msg
    │   │   ├── PalletroneState.msg
    │   │   └── Wrench.msg
    │   └── package.xml
    └── plant
        ├── package.xml
        ├── plant
        │   ├── __init__.py
        │   └── plant.py
        ├── resource
        │   └── plant
        ├── setup.cfg
        ├── setup.py
        └── xml
            ├── arm_assets
            │   ├── 6prop.stl
            │   ├── case_bearing.stl
            │   ├── LINK1_honebracket_540_under.stl
            │   ├── LINK2.stl
            │   ├── LINK3_xm430_to_Wrist.stl
            │   ├── MujocoLink2.stl
            │   ├── Wrist_Link.stl
            │   ├── XC_330_bracket.stl
            │   ├── XC_330_Parts.stl
            │   ├── XC_330_servo.stl
            │   ├── XL540.stl
            │   └── XM,H-430_idler.stl
            ├── BODY.stl
            ├── Palletrone.xml
            ├── PROP.stl
            ├── scene.xml

</section>


<h2>Reference</h2>

<section>
  <ul>
    <li><a href="https://doi.org/10.1109/LRA.2024.3416794" target="_blank" rel="noopener">
      The Palletrone Cart: Human-Robot Interaction-Based Aerial Cargo Transportation (IEEE RA-L 2024)</a></li>
    <li><a href="https://ieeexplore.ieee.org/document/11016760" target="_blank" rel="noopener">
      Aerial Dockable Multirotor UAVs: Design, Control, and Flight Time Extension Through In-Flight Battery Replacement (IEEE RA-L 2024)</a></li>
  </ul>
</section>

</body>
</html>
