project(core)

add_library(${PROJECT_NAME} STATIC)

target_sources(
  ${PROJECT_NAME}
  PRIVATE
    core.cpp
)

target_include_directories(
  ${PROJECT_NAME}
  PUBLIC
    "$<INSTALL_INTERFACE:include/core>"
    "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/..>"
  PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}" 
)

set(
  PUBLIC_HEADERS
    core.hpp
)

set_target_properties(
  ${PROJECT_NAME} 
  PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
    PUBLIC_HEADER "${PUBLIC_HEADERS}"
)

install(
  TARGETS 
    ${PROJECT_NAME} 
  LIBRARY 
    DESTINATION "${CMAKE_INSTALL_PREFIX}/lib"
  PUBLIC_HEADER 
    DESTINATION "${CMAKE_INSTALL_PREFIX}/include/${PROJECT_NAME}"
)