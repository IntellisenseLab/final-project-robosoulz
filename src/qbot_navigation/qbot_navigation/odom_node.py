#!/usr/bin/env python3

"""
odom_node.py

Simulates and publishes 2D odometry data as a ROS 2 node.

This node generates a position with Gaussian noise and publishes it as 
a nav_msgs/Odometry message at a configurable rate.

Classes:
    OdometryNode: Simulates odometry data and publishes to '/odom'.

Usage:
    $ ros2 run lab_02 odom_node

Attributes:
    step_size (float): Step size in meters for position updates.
    noise_sigma (float): Standard deviation of Gaussian noise.
    publish_rate (float): Rate (Hz) to publish Odometry messages.

Topics:
    /odom (nav_msgs/Odometry): Published simulated position and velocity.

Dependencies:
    rclpy, nav_msgs.msg, geometry_msgs.msg, random

Author:
    Yasantha Niroshan
Lab:
    CS3340 Robotics and Automation - lab_02
"""


import rclpy
from rclpy.node import Node
from nav_msgs.msg import Odometry
from geometry_msgs.msg import Quaternion
import random

import math
from rclpy.action import ActionClient
from interfaces.action import Navigation

from geometry_msgs.msg import TransformStamped
from sensor_msgs.msg import JointState
from tf2_ros import TransformBroadcaster

INDEX_NUMBER = "230091H"

def sum_digits_index(index_str:str) -> int:
    """Calculate the sum of all digits in the index string."""
    return sum(int(char) for char in index_str if char.isdigit())

def calculate_goal_from_index(index_number: str):
    digits = [int(ch) for ch in index_number if ch.isdigit()]
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

    goal_x = sum_digits // 5
    goal_y = product_digits % 10
    return float(goal_x), float(goal_y)

class OdometryNode(Node):
    def __init__(self):
        super().__init__('odometry_node')

        # Odometry publisher
        self.odom_pub = self.create_publisher(Odometry, '/odom', 10)

        self.joint_pub = self.create_publisher(JointState, '/joint_states', 10)
        self.tf_broadcaster = TransformBroadcaster(self)

        # Parameters
        self.declare_parameter('step_size', 0.5)
        self.declare_parameter('noise_sigma', 0.1)
        self.declare_parameter('publish_rate', 10.0)

        self.declare_parameter('odom_frame', 'odom')
        self.declare_parameter('base_frame', 'base_link')
        self.declare_parameter('left_wheel_joint', 'wheel_left_joint')
        self.declare_parameter('right_wheel_joint', 'wheel_right_joint')
        self.declare_parameter('wheel_radius', 0.05)        # URDF wheel radius
        self.declare_parameter('wheel_separation', 0.386)   # 0.193 - (-0.193)

        self.step_size = float(self.get_parameter('step_size').value)
        self.noise_sigma = float(self.get_parameter('noise_sigma').value)
        self.publish_rate = float(self.get_parameter('publish_rate').value)

        self.odom_frame = self.get_parameter('odom_frame').value
        self.base_frame = self.get_parameter('base_frame').value
        self.left_wheel_joint = self.get_parameter('left_wheel_joint').value
        self.right_wheel_joint = self.get_parameter('right_wheel_joint').value
        self.wheel_radius = float(self.get_parameter('wheel_radius').value)
        self.wheel_separation = float(self.get_parameter('wheel_separation').value)

        # Internal state
        self.x = 0.0
        self.y = 0.0

        self.left_wheel_pos = 0.0
        self.right_wheel_pos = 0.0
        self.last_direction = 0.0

        # Latest direction feedback from action server (radians)
        self.direction = 0.0

        # Goal management
        self.goal_reached = False
        self.goal_sent = False

        # Action Client
        self.action_client = ActionClient(self, Navigation, 'navigate')

        # Send goal once after server is available (non-blocking)
        self.create_timer(0.2, self._try_send_goal_once)

        # Timer for publishing odometry
        timer_period = 1.0 / self.publish_rate
        self.timer = self.create_timer(timer_period, self.publish_odometry)

        self.get_logger().info("Odometry Node Initialized")

    def send_goal(self, goal_x: float, goal_y: float):
        goal_msg = Navigation.Goal()
        goal_msg.end_position.x = float(goal_x)
        goal_msg.end_position.y = float(goal_y)

        send_future = self.action_client.send_goal_async(
            goal_msg,
            feedback_callback=self.feedback_callback
        )
        send_future.add_done_callback(self.goal_response_callback)
        self.goal_sent = True

    @staticmethod
    def yaw_to_quaternion(yaw: float) -> Quaternion:
        return Quaternion(
            x=0.0,
            y=0.0,
            z=math.sin(yaw / 2.0),
            w=math.cos(yaw / 2.0)
        )

    def publish_tf(self, stamp, x_pos: float, y_pos: float, yaw: float):
        tf_msg = TransformStamped()
        tf_msg.header.stamp = stamp
        tf_msg.header.frame_id = self.odom_frame
        tf_msg.child_frame_id = self.base_frame
        tf_msg.transform.translation.x = x_pos
        tf_msg.transform.translation.y = y_pos
        tf_msg.transform.translation.z = 0.0
        tf_msg.transform.rotation = self.yaw_to_quaternion(yaw)
        self.tf_broadcaster.sendTransform(tf_msg)

    def publish_joint_state(self, stamp, left_velocity: float, right_velocity: float):
        joint_msg = JointState()
        joint_msg.header.stamp = stamp
        joint_msg.name = [self.left_wheel_joint, self.right_wheel_joint]
        joint_msg.position = [self.left_wheel_pos, self.right_wheel_pos]
        joint_msg.velocity = [left_velocity, right_velocity]
        self.joint_pub.publish(joint_msg)

    def cleanup(self):
        if hasattr(self, 'timer') and self.timer is not None:
            self.timer.cancel()

        if hasattr(self, 'odom_pub') and self.odom_pub is not None:
            self.destroy_publisher(self.odom_pub)
            self.odom_pub = None

        if hasattr(self, 'joint_pub') and self.joint_pub is not None:
            self.destroy_publisher(self.joint_pub)
            self.joint_pub = None

    def _try_send_goal_once(self):
        """Try to send the navigation goal once when the action server is ready."""
        if self.goal_sent:
            return

        if not self.action_client.wait_for_server(timeout_sec=0.0):
            self.get_logger().info("Waiting for action server 'navigate'...")
            return

        goal_x, goal_y = calculate_goal_from_index(INDEX_NUMBER)

        self.get_logger().info(
            f"Sending goal to navigate: index={INDEX_NUMBER}, goal=({goal_x}, {goal_y})"
        )

        self.send_goal(goal_x, goal_y)

    def goal_response_callback(self, future):
        """Called when server accepts/rejects the goal."""
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().error("Goal rejected by the navigation server.")
            self.goal_reached = True  # stop moving/publishing
            return

        self.get_logger().info("Goal accepted by navigation server.")

        # Listen for result (success bool)
        result_future = goal_handle.get_result_async()
        result_future.add_done_callback(self.result_callback)

    def feedback_callback(self, feedback_msg):
        """Receives direction feedback from the navigation server."""
        self.direction = float(feedback_msg.feedback.direction)

    def result_callback(self, future):
        """Called once when navigation server finishes the goal."""
        response = future.result()          # GetResult.Response
        status = response.status            # GoalStatus.STATUS_*
        result = response.result            # Navigation.Result

        self.get_logger().info(f"Action status={status}, result.success={result.success}")

        if status == 4:  # STATUS_SUCCEEDED (GoalStatus.STATUS_SUCCEEDED)
            self.get_logger().info("Goal SUCCEEDED (by status). Stopping odometry updates.")
            self.goal_reached = True
            return

        if result.success:
            self.get_logger().info("Goal reached (by result.success). Stopping odometry updates.")
        else:
            self.get_logger().warn("Navigation finished without success.")

        self.goal_reached = True

        # Stop odometry publishing completely after goal reached
        if hasattr(self, 'timer') and self.timer is not None:
            self.timer.cancel()
            self.get_logger().info("Odometry timer cancelled. Stopped publishing /odom.")

    def publish_odometry(self):
        """Update position and publish Odometry message"""

        if not self.goal_sent:
            # Don’t move until goal is sent (but you could still publish zeros if you want)
            return

        if self.goal_reached:
            # Stop publishing once goal reached (as required)
            return

        # Motion update (guided by direction)
        self.x += self.step_size * math.cos(self.direction)
        self.y += self.step_size * math.sin(self.direction)
        # Add Gaussian noise
        x_noisy = self.x + random.gauss(0, self.noise_sigma)
        y_noisy = self.y + random.gauss(0, self.noise_sigma)

        stamp = self.get_clock().now().to_msg()

       # --- wheel angles from base motion ---
        distance = self.step_size  # meters moved this update (your simulation)

        current_direction = self.direction
        delta_yaw = current_direction - self.last_direction
        delta_yaw = (delta_yaw + math.pi) % (2.0 * math.pi) - math.pi  # normalize [-pi, pi]

        left_distance = distance - (delta_yaw * self.wheel_separation / 2.0)
        right_distance = distance + (delta_yaw * self.wheel_separation / 2.0)

        left_delta = left_distance / self.wheel_radius
        right_delta = right_distance / self.wheel_radius

        self.left_wheel_pos += left_delta
        self.right_wheel_pos += right_delta

        self.last_direction = current_direction

        # Wheel angular velocities (rad/s) approximate using publish_rate
        dt = 1.0 / self.publish_rate
        left_vel = left_delta / dt
        right_vel = right_delta / dt

        # Create Odometry message
        odom_msg = Odometry()
        odom_msg.header.stamp = stamp
        odom_msg.header.frame_id = self.odom_frame
        odom_msg.child_frame_id = self.base_frame

        odom_msg.pose.pose.position.x = x_noisy
        odom_msg.pose.pose.position.y = y_noisy
        odom_msg.pose.pose.position.z = 0.0
        odom_msg.pose.pose.orientation = self.yaw_to_quaternion(self.direction)

        # Optionally set velocity to zero
        odom_msg.twist.twist.linear.x = 0.0
        odom_msg.twist.twist.linear.y = 0.0
        odom_msg.twist.twist.angular.z = 0.0

        # Publish
        self.odom_pub.publish(odom_msg)
        self.get_logger().debug(f"Published Odometry: x={x_noisy:.3f}, y={y_noisy:.3f}")

        # Publish TF using TRUE (non-noisy) base pose recommended
        self.publish_tf(stamp, self.x, self.y, self.direction)
        self.publish_joint_state(stamp, left_vel, right_vel)

def main(args=None):
    rclpy.init(args=args)
    node = OdometryNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.cleanup()
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()

if __name__ == '__main__':
    main()
