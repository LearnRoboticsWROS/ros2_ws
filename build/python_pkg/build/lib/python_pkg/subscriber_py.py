#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import Int64

class NumberCounter(Node):
    def __init__(self):
        super().__init__("number_counter")
        self.counter_ = 0
        self.subscriber_ = self.create_subscription(Int64, "number", self.callback_number, 10)
        self.get_logger().info("Constructor of the class NumberPublisher")

    def callback_number(self, msg):
        self.counter_ += msg.data
        self.get_logger().info("Counter: " + str(self.counter_))

def main(args=None):
    rclpy.init(args=args)
    node = NumberCounter()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()