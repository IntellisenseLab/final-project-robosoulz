import math

import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient

from nav_msgs.msg import Odometry
from geometry_msgs.msg import TwistStamped

from interfaces.action import Navigation
from interfaces.msg import Position

from action_msgs.msg import GoalStatus

INDEX_NUMBER = "230091H"

def compute_yaw_error(target_yaw, current_yaw):
    error = target_yaw - current_yaw
    while error > math.pi:
        error -= 2.0 * math.pi
    while error < -math.pi:
        error += 2.0 * math.pi
    return error



def calculate_goal_from_index(index_number):
    digits = [int(ch) for ch in str(index_number) if ch.isdigit()]
    sum_digits = sum(digits)

    product_digits = 1
    has_non_zero = False
    for digit in digits:
        if digit == 0:
            continue
        has_non_zero = True
        product_digits *= digit
    if not has_non_zero:
        product_digits = 0

    goal_x = float(sum_digits // 5)
    goal_y = float(product_digits % 10)

    return goal_x, goal_y


class QbotControllerNode(Node):
    def __init__(self):
        super().__init__('qbot_controller')

        self.declare_parameter('linear_speed', 0.1)
        self.linear_speed = float(self.get_parameter('linear_speed').value)

        self.current_yaw = 0.0
        self.goal_achieved = False
        self.goal_sent = False
        self.odom_received = False

        self.create_subscription(
            Odometry,
            '/odom',
            self.update_yaw_from_odom,
            10
        )

        self.cmd_pub = self.create_publisher(TwistStamped, '/cmd_vel', 10)

        self.action_client = ActionClient(self, Navigation, 'navigate')

        self.timer = self.create_timer(1.0, self.send_goal_once)

        self.get_logger().info('qbot_controller initialized')

    def update_yaw_from_odom(self, msg):
        q = msg.pose.pose.orientation
        w = q.w
        z = q.z

        siny_cosp = 2.0 * (w * z)
        cosy_cosp = 1.0 - 2.0 * (z * z)
        yaw = math.atan2(siny_cosp, cosy_cosp)

        self.current_yaw = yaw
        self.odom_received = True

    def send_goal_once(self):
        if self.goal_sent:
            return

        if not self.odom_received:
            self.get_logger().info('Waiting for odom before sending goal')
            return

        if not self.action_client.server_is_ready():
            self.get_logger().info('Navigation action server not ready yet')
            return

        goal = Navigation.Goal()

        x, y = calculate_goal_from_index(INDEX_NUMBER)

        position = Position()
        position.x = x
        position.y = y

        goal.end_position = position

        self.goal_sent = True
        self.get_logger().info(f'Sending goal to ({x}, {y})')

        future = self.action_client.send_goal_async(
            goal,
            feedback_callback=self.handle_navigation_feedback
        )
        future.add_done_callback(self.handle_navigation_goal_response)

    def handle_navigation_goal_response(self, future):
        goal_handle = future.result()

        if not goal_handle.accepted:
            self.get_logger().warning('Navigation goal rejected')
            return

        self.get_logger().info('Navigation goal accepted')

        result_future = goal_handle.get_result_async()
        result_future.add_done_callback(self.handle_navigation_result)

    def handle_navigation_result(self, future):
        result_wrapper = future.result()
        result = result_wrapper.result
        status = result_wrapper.status

        if result.success or status == GoalStatus.STATUS_SUCCEEDED:
            self.get_logger().info('Navigation goal succeeded')
        else:
            self.get_logger().warning(f'Navigation failed with status {status}')

        self.goal_achieved = True

        stop_cmd = TwistStamped()
        stop_cmd.header.stamp = self.get_clock().now().to_msg()
        stop_cmd.header.frame_id = 'base_link'
        stop_cmd.twist.linear.x = 0.0
        stop_cmd.twist.angular.z = 0.0
        self.cmd_pub.publish(stop_cmd)

    def handle_navigation_feedback(self, feedback_msg):
        if self.goal_achieved:
            return

        direction = feedback_msg.feedback.direction
        yaw_error = compute_yaw_error(direction, self.current_yaw)

        cmd = TwistStamped()
        cmd.header.stamp = self.get_clock().now().to_msg()
        cmd.header.frame_id = 'base_link'

        # If heading error is large, rotate in place first
        if abs(yaw_error) > 0.15:
            cmd.twist.linear.x = 0.0
            cmd.twist.angular.z = 3.0 * yaw_error
        else:
            cmd.twist.linear.x = self.linear_speed
            cmd.twist.angular.z = 2.0 * yaw_error

        self.get_logger().info(
            f'direction={direction:.3f}, current_yaw={self.current_yaw:.3f}, yaw_error={yaw_error:.3f}'
        )
        self.cmd_pub.publish(cmd)


def main(args=None):
    rclpy.init(args=args)
    node = QbotControllerNode()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    
    finally:
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()


if __name__ == '__main__':
    main()