#pragma once // This header is included only once in compilation.

#include <robot_info/hydraulic_system_monitor.h>
#include <robot_info/robot_info_class.h> // Include the header file for the base RobotInfo class.

// Define a class named AgvInfo that inherits from the base RobotInfo class.
class AgvInfo : public RobotInfo {
public:
  // Constructor for the AgvInfo class, inheriting from RobotInfo, and taking
  // additional parameters.
  AgvInfo(ros::NodeHandle &nh, const std::string &robot_description,
          const std::string &serial_number, const std::string &ip_address,
          const std::string &firmware_version,
          const std::string &maximum_payload, const std::string &oil_temp,
          const std::string &oil_level, const std::string &oil_pressure);

  // Overridden method to publish data, as defined in the base class.
  void publish_data() override;

private:
  std::string maximum_payload;
  HydraulicSystemMonitor hydraulicSystem;
};