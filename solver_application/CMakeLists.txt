add_executable(solver_app sources/equation.cpp)
target_link_libraries(solver_app PRIVATE formatter_ex solver)

install(TARGETS solver_app RUNTIME DESTINATION bin)
