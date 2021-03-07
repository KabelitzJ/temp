cmake_minimum_required(VERSION 3.15)

if (NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Debug)
endif()

project(temp CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

set(CMAKE_INSTALL_PREFIX "${CMAKE_SOURCE_DIR}/dist")

add_subdirectory(temp)

add_subdirectory(examples)
