# Week 08 Setup Notes

## Project
**Autonomous Indoor Delivery Robot Using ROS-Based Navigation on Kobuki QBot**

## Team
**RoboSoulz**

## Team Members
- **Birajith K.** – 230091H
- **Rafi M.A.A** – 230505J
- **Saran S.** – 230582N

---

## Objective of Week 08
The objective of Week 08 is to complete the initial setup required for the project. For the current stage, the work completed on the local development machine includes ROS 2 verification, project workspace setup, package integration from previous labs, package renaming, successful workspace build, and local node execution.

---

## 1. Repository Setup
**Status:** Completed

### Folder Structure Created
- `docs/images/`
- `docs/logs/week08/`
- `docs/setup_notes/`
- `docs/weekly_reports/`
- `references/`
- `scripts/`
- `src/`

### Notes
The GitHub repository structure for the final project was created and organized. The `README.md` file was updated with project title, team details, scope, repository structure, Week 08 goal, and team responsibilities.

---

## 2. Raspberry Pi Setup
**Status:** Not started on hardware yet

### Notes
Raspberry Pi setup has not yet been performed. Hardware-related activities such as SD card preparation, operating system installation, ROS setup on the Pi, and direct robot interfacing remain pending for the lab environment.

At the current stage, progress has been limited to the local development machine using the laptop.

---

## 3. ROS 2 Installation and Configuration
**Status:** Completed on local development machine

### ROS Details
- ROS 2 distribution: **Jazzy**
- Verification status: **Working**
- Workspace build status: **Successful**

### Commands Verified
```bash
ros2 --help
printenv | grep ROS
colcon build
source install/setup.bash