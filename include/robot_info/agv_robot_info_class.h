#pragma once

#include <robot_info/robot_info_class.h>

class AGVRobotInfo : public RobotInfo {
public:
  AGVRobotInfo(ros::NodeHandle &nh, const std::string &robot_description,
               const std::string &serial_number, const std::string &ip_address,
               const std::string &firmware_version,
               const std::string &maximum_payload);

  void publish_data() override;

private:
  std::string maximum_payload;
};