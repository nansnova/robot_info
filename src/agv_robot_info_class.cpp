#include <robot_info/agv_robot_info_class.h>

AGVRobotInfo::AGVRobotInfo(ros::NodeHandle &nh,
                           const std::string &robot_description,
                           const std::string &serial_number,
                           const std::string &ip_address,
                           const std::string &firmware_version,
                           const std::string &maximum_payload)
    : RobotInfo(nh, robot_description, serial_number, ip_address,
                firmware_version),
      maximum_payload(maximum_payload) {}

void AGVRobotInfo::publish_data() {
  set_data_fields();
  robot_info_msg.data_field_05 = "maximum_payload: " + maximum_payload;

  robot_info_pub.publish(robot_info_msg);
}