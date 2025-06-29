#!/usr/bin/env python3

"""
Mission manager node, Görev FSM'ini yürütür. Kalkış, stabil uçuş kontrolü
takip görevine geçiş ve iptal gibi üst seviye kontrol mekanizmalarını yönetir.
"""

import rclpy
from rclpy.node import Node
from px4_msgs.msg import SensorCombined
from rclpy.qos import QoSProfile, ReliabilityPolicy


class MissionManagerNode(Node):
    def __init__(self):
        super().__init__("mission_manager_node")
        self.get_logger().info("mission_manager_node is ready!")
        self.state_ = 'WAIT_TAKEOFF'
        # self.subscriber_ = self.create_subscription(SensorCombined, '/fmu/out/sensor_combined', self.cb, QoSProfile(depth=10, reliability=ReliabilityPolicy.BEST_EFFORT))
        

    #def cb(self,msg):
    #    self.get_logger().info(f"AccelX: {msg.accelerometer_m_s2[0]:.3f}")


def main(args=None):
    rclpy.init(args=args)
    node = MissionManagerNode()
    rclpy.spin(node)
    rclpy.shutdown

if __name__ == "__main__":
    main()

