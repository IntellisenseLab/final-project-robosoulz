#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
import matplotlib.pyplot as plt
from nav_msgs.msg import Odometry

# Custom service + message
from interfaces.srv import GetLastPositions
from interfaces.msg import Position


class MapperNode(Node):
    def __init__(self):
        super().__init__('map_node')

        # Store (x, y) history as list of tuples
        self.position_history = []

        # Subscriber to /odom
        self.subscriber = self.create_subscription(
            Odometry,
            '/odom',
            self.odom_callback,
            10
        )

        # Service: /get_last_positions
        self.service = self.create_service(
            GetLastPositions,
            '/get_last_positions',
            self.handle_get_last_positions
        )

        self.get_logger().info("MapNode started: subscribing to /odom and serving /get_last_positions")

    def odom_callback(self, msg: Odometry):
        x = float(msg.pose.pose.position.x)
        y = float(msg.pose.pose.position.y)
        self.position_history.append((x, y))

        # (Optional) Keep history bounded (prevents memory growth)
        if len(self.position_history) > 5000:
            self.position_history = self.position_history[-5000:]

    def handle_get_last_positions(self, request, response):
        n = int(request.num_positions)

        # Handle edge cases
        if n <= 0:
            response.positions = []
            return response

        # Take last n (or fewer if not enough)
        last = self.position_history[-n:]

        out = []
        for x, y in last:
            p = Position()
            p.x = float(x)
            p.y = float(y)
            out.append(p)

        response.positions = out
        return response
    
    def save_plot(self, filename="robot_path.png"):
        n = len(self.position_history)

        if n == 0:
            self.get_logger().warn("No points received. Saving empty plot.")
            plt.figure()
            plt.xlabel("X Position")
            plt.ylabel("Y Position")
            plt.title("Robot Path (no data)")
            plt.grid(True)
            plt.savefig(filename)
            plt.close()
            return

        xs = [p[0] for p in self.position_history]
        ys = [p[1] for p in self.position_history]

        plt.figure()
        if n == 1:
            # plot a single point
            plt.scatter(xs, ys)
        else:
            plt.plot(xs, ys)

        plt.xlabel("X Position")
        plt.ylabel("Y Position")
        plt.title(f"Robot Path (points={n})")
        plt.grid(True)
        plt.savefig(filename)
        self.get_logger().info(f"Saved path plot to {filename} (points={n})")
        plt.close()


def main(args=None):
    rclpy.init(args=args)
    node = MapperNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        try:
            node.get_logger().info("KeyboardInterrupt received. Saving plot...")
        except Exception:
            pass
        node.save_plot("robot_path.png")
    finally:
        try:
            node.destroy_node()
        except Exception:
            pass
        try:
            if rclpy.ok():
                rclpy.shutdown()
        except Exception:
            pass


if __name__ == '__main__':
    main()
