project(demo CXX)

add_executable(${PROJECT_NAME})

target_sources(
  ${PROJECT_NAME}
  PRIVATE
    demo.cpp
)

target_link_libraries(
  ${PROJECT_NAME}
  PUBLIC
    temp::temp
)

set_target_properties(
  ${PROJECT_NAME}
  PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin" 
)

install(
  TARGETS ${PROJECT_NAME}
  RUNTIME 
    DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/examples"
)
