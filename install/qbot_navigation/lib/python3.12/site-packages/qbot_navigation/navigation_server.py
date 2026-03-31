import math
import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
from nav_msgs.msg import Odometry
from interfaces.action import Navigation

class NavigationServer(Node):

    def __init__(self):
        super().__init__('navigation_server')

        self.declare_parameter('goal_tolerance', 0.1)
        self.declare_parameter('feedback_rate', 4.0)

        self.goal_tolerance = self.get_parameter('goal_tolerance').value
        self.feedback_rate = self.get_parameter('feedback_rate').value

        self.current_x = 0.0
        self.current_y = 0.0

        self.subscription = self.create_subscription(
            Odometry,
            '/odom',
            self.odom_callback,
            10)

        self._action_server = ActionServer(
            self,
            Navigation,
            'navigate',
            self.execute_callback)

        self.get_logger().info(
            f"Navigation server started | tol={self.goal_tolerance}, fb_rate={self.feedback_rate}")       

    def odom_callback(self, msg):
        self.current_x = msg.pose.pose.position.x
        self.current_y = msg.pose.pose.position.y

    def execute_callback(self, goal_handle):

        goal = goal_handle.request.end_position
        self.get_logger().info(f"Goal received: ({goal.x:.2f}, {goal.y:.2f})")

        # rclpy rate 
        rate_hz = self.feedback_rate if self.feedback_rate > 0 else 4.0
        rate = self.create_rate(rate_hz)

        while rclpy.ok():

            # If client cancels
            if goal_handle.is_cancel_requested:
                goal_handle.canceled()
                result = Navigation.Result()
                result.success = False
                self.get_logger().warn("Goal cancel by client.")
                return result

            dx = goal.x - self.current_x
            dy = goal.y - self.current_y
            distance = math.sqrt(dx**2 + dy**2)
             
            if distance <= self.goal_tolerance:
                goal_handle.succeed()
                result = Navigation.Result()
                result.success = True
                self.get_logger().info(f"Return result.success={result.success}")
                return result

            direction = math.atan2(dy, dx)

            feedback_msg = Navigation.Feedback()
            feedback_msg.direction = direction
            goal_handle.publish_feedback(feedback_msg)

            rate.sleep()

def main(args=None):
    import rclpy
    from rclpy.executors import MultiThreadedExecutor

    rclpy.init(args=args)
    node = NavigationServer()

    executor = MultiThreadedExecutor()
    executor.add_node(node)

    try:
        executor.spin()
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()


if __name__ == '__main__':
    main()