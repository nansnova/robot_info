#pragma once // To ensure this header is included only once in
             // compilation.

#include <robotinfo_msgs/RobotInfo10Fields.h> // Include the RobotInfo10Fields message definition.
#include <ros/ros.h>                          // Include the ROS C++ library.

class RobotInfo {

public:
  // Constructor for the RobotInfo class.
  RobotInfo(ros::NodeHandle &nh, const std::string &robot_description,
            const std::string &serial_number, const std::string &ip_address,
            const std::string &firmware_version);

  // Method to publish the RobotInfo message (to be implemented by subclasses).
  virtual void publish_data();

protected:
  // Member variables to store information about the robot.
  std::string robot_description;
  std::string serial_number;
  std::string ip_address;
  std::string firmware_version;

  // Object to hold the RobotInfo message with 10 fields.
  robotinfo_msgs::RobotInfo10Fields robot_info_msg;

  // Publisher for sending RobotInfo messages to a ROS topic.
  ros::Publisher robot_info_pub;

  // Helper method to set the data fields in the RobotInfo message.
  void set_data_fields();
};
