#include <robot_info/hydraulic_system_monitor.h>

// Taking parameters for monitoring values.
HydraulicSystemMonitor::HydraulicSystemMonitor(std::string oil_temp,
                                               std::string oil_level,
                                               std::string oil_pressure)
    : hydraulic_oil_temperature(oil_temp),
      hydraulic_oil_tank_fill_level(oil_level),
      hydraulic_oil_pressure(oil_pressure) {}

// Getter method to retrieve hydraulic oil temperature.
std::string HydraulicSystemMonitor::getOilTemperature() const {
  return hydraulic_oil_temperature;
}

// Getter method to retrieve oil tank fill level.
std::string HydraulicSystemMonitor::getOilLevel() const {
  return hydraulic_oil_tank_fill_level;
}

// Getter method to retrieve hydraulic oil pressure.
std::string HydraulicSystemMonitor::getOilPressure() const {
  return hydraulic_oil_pressure;
}
