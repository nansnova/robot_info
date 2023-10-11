#include <robot_info/robot_info_class.h>

// Constructor for the RobotInfo class.
RobotInfo::RobotInfo(ros::NodeHandle &nh, const std::string &robot_description,
                     const std::string &serial_number,
                     const std::string &ip_address,
                     const std::string &firmware_version)
    : robot_description(robot_description), serial_number(serial_number),
      ip_address(ip_address), firmware_version(firmware_version) {

  // Create a publisher to publish RobotInfo messages on the "/robot_info"
  // topic.
  robot_info_pub =
      nh.advertise<robotinfo_msgs::RobotInfo10Fields>("/robot_info", 1);
}

// Publish the RobotInfo message.
void RobotInfo::publish_data() {
  // Set the data fields in the RobotInfo message.
  set_data_fields();

  // Publish the RobotInfo message.
  robot_info_pub.publish(robot_info_msg);
}

// Set the data fields in the RobotInfo message.
void RobotInfo::set_data_fields() {
  // Set data fields with information from constructor parameters.
  robot_info_msg.data_field_01 = "robot_description: " + robot_description;
  robot_info_msg.data_field_02 = "serial_number: " + serial_number;
  robot_info_msg.data_field_03 = "ip_address: " + ip_address;
  robot_info_msg.data_field_04 = "firmware_version: " + firmware_version;
}
