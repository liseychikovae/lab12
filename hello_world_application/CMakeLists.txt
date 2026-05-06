add_executable(hello_world sources/main.cpp)
target_link_libraries(hello_world PRIVATE formatter_ex)

install(TARGETS hello_world RUNTIME DESTINATION bin)
