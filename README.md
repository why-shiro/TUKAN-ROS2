# 📚 ROS 2 UAV Tracking System - README

This project is a ROS 2-based software framework for controlling a PX4-powered UAV that autonomously tracks another aircraft using both GPS-based pursuit and vision-based PID control, culminating in a simulated 'hit' confirmation.

## 🚀 Overview

The system consists of multiple modules including mission management (FSM), tracking control, no-fly zone monitoring, image processing, and PX4 interface. Each component runs as an independent ROS 2 node and communicates via ROS 2 topics, services, and actions.

## 🧩 Components

* **mission\_manager\_node:** Manages the overall mission flow including takeoff, stabilization, tracking, and return. Implements the FSM logic.

* **tracking\_manager\_node:** Manages GPS pursuit and visual tracking actions, handles transitions, and generates setpoints.

* **gps\_pursuit\_action\_server:** Executes the GPS-based approach, sending progress feedback.

* **follow\_target\_action\_server:** Starts a 4-second PID-based tracking phase when the target is detected by the camera.

* **image\_processor\_node:** Runs target detection (e.g., YOLO), publishing `/target/relative_position` and `/target/detection_alert`.

* **px4\_interface\_node:** Interfaces with the PX4 flight stack, sends setpoints, and publishes odometry/status.

* **camera\_feed\_node:** Captures and publishes raw camera frames.

* **gps\_uav\_server\_node:** Publishes positions of other UAVs and provides a UAV list service.

* **no\_fly\_zone\_guard\_node:** Monitors potential no-fly zone intrusions and sends alerts when needed.

## 🔥 Data Flow

1. After takeoff and stabilization, `mission_manager_node` signals `tracking_manager_node` to start GPS pursuit.

2. `tracking_manager_node` sends a goal to `gps_pursuit_action_server` → GPS-based pursuit begins.

3. If the camera detects the target, GPS pursuit is canceled → a goal is sent to `follow_target_action_server` → 4-second PID tracking begins.

4. On completion, the FSM transitions to the next mission phase.

## 📡 ROS 2 Interfaces

* **Topics:** `/offboard/set_pos`, `/vehicle/odometry`, `/vehicle/status`, `/target/relative_position`, `/target/detection_alert`
* **Services:** `/get_uav_list`
* **Actions:** `/gps_pursuit`, `/follow_target`

This architecture supports autonomous mission execution, task cancellation, and real-time feedback mechanisms.
