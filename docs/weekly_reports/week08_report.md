# Week 08 Progress Report

## Project
Autonomous Indoor Delivery Robot Using ROS-Based Navigation on Kobuki QBot

## Team
RoboSoulz

## Work Completed This Week
- Organized the GitHub repository structure for the final project
- Updated the project README with scope, team details, and Week 08 responsibilities
- Copied relevant ROS 2 packages from previous lab work into the project repository
- Renamed and rebuilt the navigation package as `qbot_navigation`
- Verified that the ROS 2 environment is working on the local development machine
- Built the workspace successfully using `colcon build`
- Verified that the packages `qbot_navigation` and `qbot_description` are recognized by ROS 2
- Verified the executables in `qbot_navigation`
- Successfully launched at least one project node locally

## Current Status
The project repository and local ROS 2 workspace are ready for development. Core packages from previous labs have been integrated into the project structure and verified locally. Hardware-level setup with the QBot and Raspberry Pi has not yet been completed.

## Challenges Faced
- Needed to correctly preserve ROS package structure while reusing lab code
- Package renaming required care to avoid breaking imports and executable registration
- Hardware communication could not yet be tested because the QBot was not connected

## Actions Taken
- Copied full ROS packages instead of individual source files
- Renamed the navigation package to `qbot_navigation`
- Rebuilt and verified the workspace after renaming
- Tested executable discovery and node launching in the local ROS 2 environment

## Plan for Next Week
- Begin hardware setup with the Raspberry Pi and QBot
- Identify communication interface between Raspberry Pi and QBot
- Start Kinect RGB-D sensor integration
- Begin perception setup for mapping