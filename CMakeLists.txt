cmake_minimum_required(VERSION 2.8)

set(PROJECT_NAME Lab_QueueList) 
project(${PROJECT_NAME})
 
set(ListLib ListLib)
set(QueueList QueueList)
set(QueueListLib QueueListLib)
set(QueueListTest QueueListTest)


set(CMAKE_CONFIGURATION_TYPES "Debug;Release" CACHE STRING "Configs" FORCE)
if(NOT CMAKE_BUILD_TYPE) 
 set(CMAKE_BUILD_TYPE Release) 
endif()


include_directories(${CMAKE_CURRENT_SOURCE_DIR}/ListLib)


include_directories(${CMAKE_CURRENT_SOURCE_DIR}/QueueListLib)
add_subdirectory(QueueList)
add_subdirectory(ListLib)
add_subdirectory(QueueListLib)
add_subdirectory(QueueListTest)
add_subdirectory(gtest)
