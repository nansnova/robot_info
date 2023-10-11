#include <robot_info/agv_robot_info_class.h> // Include the header file for AGVRobotInfo class.

// Constructor for the AgvInfo class, inheriting from RobotInfo.
AgvInfo::AgvInfo(ros::NodeHandle &nh, const std::string &robot_description,
                 const std::string &serial_number,
                 const std::string &ip_address,
                 const std::string &firmware_version,
                 const std::string &maximum_payload)
    : RobotInfo(nh, robot_description, serial_number, ip_address,
                firmware_version), // Call the base class constructor.
      maximum_payload(maximum_payload) {}

// Implementation of the publish_data method for the AgvInfo class.
void AgvInfo::publish_data() {
  set_data_fields(); // Call the base class method to set common data fields.
  robot_info_msg.data_field_05 = "maximum_payload: " + maximum_payload;

  robot_info_pub.publish(robot_info_msg); // Publish the populated message.
}