#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from tracking_actions.action import FollowTarget # Camera Tracking
from tracking_actions.action import GpsPursuit # GPS Pursuit Tracking

from rclpy.action import ActionClient

class TrackingManagerNode(Node):
    def __init__(self):
        super().__init__('tracing_manager_node')

        self.state_ = 'IDLE'