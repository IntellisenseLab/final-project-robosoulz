# Autonomous Indoor Delivery Robot Using ROS-Based Navigation on Kobuki QBot

## CS3340: Robotics and Automation Final Project  
**Department of Computer Science and Engineering**

---

## 👥 Team: RoboSoulz

| Name | Index Number |
|------|-------------|
| Birajith K. | 230091H |
| Rafi M.A.A | 230505J |
| Saran S. | 230582N |

---

## 📌 Project Overview

This project focuses on the design and implementation of an **Autonomous Indoor Delivery Robot** using the **Kobuki QBot platform** integrated with a **Kinect RGB-D sensor**.

The robot is designed to navigate autonomously within an indoor environment and deliver items between predefined locations. The system integrates core robotics components—**perception, planning, and control**—within a **ROS 2-based architecture**.

---

## 🎯 Objectives

- Generate an **occupancy grid map** using depth sensor data  
- Implement **path planning algorithms** (A*, Dijkstra)  
- Enable **autonomous navigation** between predefined delivery points  
- Integrate perception, planning, and control modules  
- Demonstrate a complete indoor delivery task  

---

## 🏗️ System Architecture

The system is divided into the following modules:

### 🔹 Perception Module
- Acquire RGB and depth data from Kinect sensor  
- Generate occupancy grid map  
- Detect obstacles in the environment  

### 🔹 Planning Module
- Select target delivery locations  
- Generate collision-free paths using planning algorithms  
- Handle path updates if required  

### 🔹 Control Module
- Convert planned paths into velocity commands  
- Control robot movement using ROS `cmd_vel`  
- Maintain stable trajectory tracking  

### 🔹 ROS Integration
- Implement each module as ROS 2 nodes  
- Communicate via ROS topics  
- Visualize system using RViz  

---

## 📁 Repository Structure

```text
final-project-robosoulz/
├── docs/
│ ├── images/
│ ├── logs/
│ │ └── week08/
│ │     └── local_setup_verification.txt
│   ├── setup_notes/
│   │   ├── week08/
│   │       ├── week08_setup.md
│   │       └── week08_node_summary.md
│   │   ├── week09/
│ ├── weekly_reports/
│ │     └── week08_report.md
│
├── src/
│ ├── qbot_navigation/     # Main project package (perception, planning, control)
│ ├── qbot_description/    # Robot model and visualization files
│ ├── interfaces/          # Custom ROS interfaces (if used)
│
├── README.md
```

---

## ⚙️ Technologies Used

- **ROS 2 (Jazzy)**
- **Python (ROS Nodes)**
- **Kobuki QBot**
- **Kinect RGB-D Sensor**
- **SLAM / Mapping Tools**
- **RViz for visualization**

---

## 🚀 Setup Instructions

### 1. Clone the Repository

```bash
git clone <your-repo-link>
cd final-project-robosoulz
```

### 2. Build

```bash
colcon build
```

### 3. Source

```bash
source install/setup.bash
```

### 4. Run

```bash
ros2 run qbot_navigation odom_node
```

---

## 📅 Project Timeline

| Week | Task |
|------|------|
| Week 08 | Setup and ROS environment verification |
| Week 09 | Perception (Kinect + mapping) |
| Week 10 | Path planning |
| Week 11 | Motion control |
| Week 12 | System integration |
| Week 13 | Testing and documentation |

---

## 🧪 Week 08 Progress

### ✅ Completed
- Repository initialized and structured  
- ROS 2 environment verified (Jazzy)  
- Workspace successfully built using `colcon build`  
- Integrated packages from previous labs  
- Renamed package to `qbot_navigation`  
- Verified package detection in ROS  
- Verified executables:
  - mapper_node
  - navigation_server
  - odom_node
  - qbot_controller
- Successfully launched ROS nodes locally  
- Verified node registration (`/map_node`)

### ❌ Pending
- Raspberry Pi setup  
- QBot hardware connection  
- Kinect sensor integration  
- Hardware communication testing  

---

## 📚 References

- Kobuki QBot Documentation  
  https://kobuki.readthedocs.io/en/devel/index.html  
- Kobuki Python Interface  
  https://github.com/IntellisenseLab/kobuki-python  

- ROS 2 Navigation Stack (Nav2)  
  https://docs.nav2.org/  

- Thrun, S., Burgard, W., & Fox, D. (2005)  
  *Probabilistic Robotics*, MIT Press  

---

## 📌 Notes
This project builds upon ROS-based lab implementations.
Current progress includes software setup and validation on a local machine.
Hardware integration will be performed in subsequent phases.

---

## Project Status

🟡 **In Progress — Week 08 Completed (Software Setup Stage)**