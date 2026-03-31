# Week 08 Node Summary

## Overview

This document summarizes the ROS 2 nodes verified during Week 08 as part of the local setup validation. These nodes were executed successfully in a local environment without hardware integration.

---

## 1. mapper_node

### Purpose
Responsible for generating an occupancy grid map based on sensor input.

### Functionality
- Processes environmental data  
- Constructs a basic map representation  
- Publishes map data to relevant ROS topics  

### Key Concept
Perception module – converts sensor data into a usable environment representation.

---

## 2. navigation_server

### Purpose
Handles high-level navigation logic and path execution.

### Functionality
- Receives goal positions  
- Plans navigation paths  
- Coordinates movement between nodes  

### Key Concept
Planning module – determines how the robot moves from start to goal.

---

## 3. odom_node

### Purpose
Tracks the robot’s position using odometry.

### Functionality
- Publishes robot pose (position and orientation)  
- Provides feedback for navigation and control  
- Helps maintain localization  

### Key Concept
State estimation – keeps track of robot movement over time.

---

## 4. qbot_controller

### Purpose
Controls robot motion using velocity commands.

### Functionality
- Subscribes to navigation commands  
- Publishes velocity commands (`cmd_vel`)  
- Executes movement actions  

### Key Concept
Control module – translates planned paths into physical motion.

---

## Summary

The following core robotics pipeline was validated:

Perception → Planning → Control

- mapper_node → perception  
- navigation_server → planning  
- qbot_controller → control  
- odom_node → feedback system  

This confirms that the foundational architecture for the project is correctly structured and functional at the software level.

---

## Status

All nodes were successfully executed and verified locally during Week 08.
Hardware integration will be performed in subsequent phases.