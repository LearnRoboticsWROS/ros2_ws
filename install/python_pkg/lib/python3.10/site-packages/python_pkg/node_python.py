#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

class NumberPublisher(Node):
    def __init__(self):
        super().__init__("number_publisher")
        self.number_ = 1
        self.number_timer_ = self.create_timer(1, self.print_number)
        self.get_logger().info("Constructor of the class NumberPublisher")

    def print_number(self):
        self.get_logger().info(str(self.number_))



def main(args=None):
    rclpy.init(args=args)
    node = NumberPublisher()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()