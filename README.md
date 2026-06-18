# QBot Navigation System

A ROS 2 Jazzy-based navigation and mapping system for the Kobuki robot using an LD19 LiDAR, SLAM, A* path planning, and a web-based React user interface.

---

## Prerequisites

* Ubuntu on Raspberry Pi
* ROS 2 Jazzy
* Kobuki Base
* LD19 LiDAR
* Built workspace (`kobuki_ws`)
* Built React frontend (`build` directory)

---

## Starting the System

The system requires three separate terminals.

### Terminal 1: Launch the Hardware Stack

This command:

* Connects to the Kobuki base
* Starts the LD19 LiDAR
* Launches the SLAM mapping system
* Starts the A* Navigation Server

```bash
cd ~/Desktop/ROS2_Final_Project/kobuki_ws

source /opt/ros/jazzy/setup.bash
source install/setup.bash

ros2 launch qbot_nav qbot_hardware.launch.py
```

---

### Terminal 2: Start the WebSocket Bridge

This allows communication between the React web interface and ROS 2 using Rosbridge.

```bash
cd ~/Desktop/ROS2_Final_Project/kobuki_ws

source /opt/ros/jazzy/setup.bash
source install/setup.bash

ros2 run rosbridge_server rosbridge_websocket --ros-args -p port:=9090
```

---

### Terminal 3: Serve the React User Interface

This hosts the compiled React application using Python's lightweight HTTP server.

```bash
cd ~/Desktop/ROS2_Final_Project/build

python3 -m http.server 8000
```

---

## Accessing the Web Interface

After all services are running, open a web browser on a device connected to the same Wi-Fi network as the Raspberry Pi.

Navigate to:

```text
http://<RASPBERRY_PI_IP>:8000
```

Example:

```text
http://192.168.8.154:8000
```

---

## Finding the Raspberry Pi IP Address

Run:

```bash
hostname -I
```

Example output:

```text
192.168.8.154
```

Use the displayed IP address in your browser:

```text
http://192.168.8.154:8000
```

---

## System Architecture

```text
React Web UI
      │
      ▼
Rosbridge WebSocket (Port 9090)
      │
      ▼
ROS 2 Jazzy
      │
 ┌────┴────┐
 │         │
 ▼         ▼
SLAM     A* Navigation
 │
 ▼
LD19 LiDAR
 │
 ▼
Kobuki Base
```

---

## Troubleshooting

### Web UI Cannot Connect

Verify the Rosbridge server is running:

```bash
ros2 node list
```

You should see:

```text
/rosbridge_websocket
```

---

### Cannot Access the Web Interface

Check that the Python server is running:

```bash
ps aux | grep http.server
```

Verify the Raspberry Pi IP address:

```bash
hostname -I
```

Ensure the client device is connected to the same Wi-Fi network.

---

### Verify ROS 2 Nodes

```bash
ros2 node list
```

---

## Ports Used

| Service             | Port |
| ------------------- | ---- |
| React Web UI        | 8000 |
| Rosbridge WebSocket | 9090 |

---

## Shutdown

To stop the system safely, press:

```bash
Ctrl + C
```

in each terminal window.
