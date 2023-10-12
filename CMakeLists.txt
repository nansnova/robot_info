cmake_minimum_required(VERSION 3.0.2)
project(robot_info)

find_package(catkin REQUIRED COMPONENTS
  robotinfo_msgs
  roscpp
)  # Find required Catkin packages and components.

catkin_package()

###########
## Build ##
###########

# Include directories for header files.
include_directories(
  include
  ${catkin_INCLUDE_DIRS}
)

# Declare a C++ executable named "robot_info_node" and specify source files.
add_executable(robot_info_node src/robot_info_class.cpp src/robot_info_main.cpp)
# Link the "robot_info_node" executable with the necessary libraries and dependencies.
target_link_libraries(robot_info_node
   ${catkin_LIBRARIES}
)

# Declare a C++ executable named "agv_robot_info_node" with source files.
add_executable(agv_robot_info_node src/agv_robot_info_class.cpp src/agv_robot_info_main.cpp src/robot_info_class.cpp src/hydraulic_system_monitor.cpp)
# Link the "agv_robot_info_node" executable with the necessary libraries and dependencies.
target_link_libraries(agv_robot_info_node
   ${catkin_LIBRARIES}
)
