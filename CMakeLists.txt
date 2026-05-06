cmake_minimum_required(VERSION 3.16)

project(formatter_workspace VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

option(BUILD_EXAMPLES "Build examples" ON)
option(BUILD_TESTS "Build tests" OFF)

add_subdirectory(formatter_lib)
add_subdirectory(formatter_ex_lib)
add_subdirectory(solver_lib)

if(BUILD_EXAMPLES)
  add_subdirectory(hello_world_application)
  add_subdirectory(solver_application)
endif()

if(BUILD_TESTS)
  enable_testing()
  add_subdirectory(tests)
endif()

install(FILES README.md LICENSE DESTINATION share/formatter_workspace)

include(CPackConfig.cmake)

add_executable(demo ${CMAKE_CURRENT_SOURCE_DIR}/demo/main.cpp)
target_link_libraries(demo PRIVATE formatter_ex)
install(TARGETS demo RUNTIME DESTINATION bin)
