cmake_minimum_required(VERSION 2.8)
project(readImg)
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
add_executable(readImage readImage.cpp)
target_link_libraries(readImage ${OpenCV_LIBS})
