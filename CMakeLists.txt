cmake_minimum_required(VERSION 3.0.2)
project(robot_info)

find_package(catkin REQUIRED COMPONENTS
  robotinfo_msgs
  roscpp
)

catkin_package(
)

###########
## Build ##
###########

include_directories(
  include
  ${catkin_INCLUDE_DIRS}
)

add_executable(robot_info_node src/robot_info_class.cpp src/robot_info_main.cpp)
target_link_libraries(robot_info_node
   ${catkin_LIBRARIES}
)