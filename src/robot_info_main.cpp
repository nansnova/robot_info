#include <robot_info/robot_info_class.h> // Include the header file for RobotInfo class.

int main(int argc, char **argv) {
  ros::init(
      argc, argv,
      "robot_info");  // Initialize the ROS node with the name "robot_info".
  ros::NodeHandle nh; // Create a NodeHandle to interact with the ROS system.

  // Create a RobotInfo object with specific parameters and initialize it.
  RobotInfo robot_info =
      RobotInfo(nh, "Mir100", "567A359", "169.254.5.180", "3.5.8");

  ros::Rate rate(
      1); // Create a Rate object to control the publishing rate (1 Hz).

  while (ros::ok()) {
    robot_info.publish_data(); // Publish the RobotInfo message.
    rate.sleep();
  }
}
