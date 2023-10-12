#pragma once // Header included only once in compilation.

#include <string> // Standard string class.

// HydraulicSystemMonitor class for monitoring hydraulic system parameters.
class HydraulicSystemMonitor {
private:
  std::string hydraulic_oil_temperature;
  std::string hydraulic_oil_tank_fill_level;
  std::string hydraulic_oil_pressure;

public:
  // Constructor for the HydraulicSystemMonitor class, taking parameters for
  // monitoring values.
  HydraulicSystemMonitor(std::string oil_temp, std::string oil_level,
                         std::string oil_pressure);

  // Getter methods
  std::string getOilTemperature() const;
  std::string getOilLevel() const;
  std::string getOilPressure() const;
};
