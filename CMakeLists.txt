cmake_minimum_required(VERSION 3.0.2)
project(robot_info)

## Find catkin macros and libraries
find_package(catkin REQUIRED COMPONENTS
  robotinfo_msgs
  roscpp
)

catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES robot_info
#  CATKIN_DEPENDS robotinfo_msgs roscpp
#  DEPENDS system_lib
)

###########
## Build ##
###########

## Specify additional locations of header files
include_directories(
  include/robot_info
  ${catkin_INCLUDE_DIRS}
)

add_executable(robot_info_node src/robot_info_class.cpp src/robot_info_main.cpp)
target_link_libraries(robot_info_node
   ${catkin_LIBRARIES}
)

add_executable(agv_robot_info_node src/agv_robot_info_class.cpp src/agv_robot_info_main.cpp src/robot_info_class.cpp)
target_link_libraries(agv_robot_info_node
   ${catkin_LIBRARIES}
)