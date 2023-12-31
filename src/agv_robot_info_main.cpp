#include <robot_info/agv_robot_info_class.h> // Include the header file for AgvInfo class.
#include <robot_info/hydraulic_system_monitor.h>

int main(int argc, char **argv) {
  ros::init(argc, argv, "agv_robot_info"); // Initialize the ROS node with the
                                           // name "agv_robot_info".
  ros::NodeHandle nh; // Create a NodeHandle to interact with the ROS system.

  // Create an instance of the AGVRobotInfo class with specific parameters and
  // initialize it.
  AgvInfo AGV_robot_info =
      AgvInfo(nh, "Mir100", "567A359", "169.254.5.180", "3.5.8", "100 Kg",
              "45C", " 100%", "200 bar");

  ros::Rate rate(1);

  while (ros::ok()) { // Continue the loop as long as the ROS system is
                      // operational.
    AGV_robot_info.publish_data(); // Publish the AGVRobotInfo data.
    rate.sleep();                  // Sleep to control the publishing rate.
  }
}