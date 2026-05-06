add_library(solver STATIC sources/solver.cpp)
target_include_directories(solver PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
)

install(TARGETS solver ARCHIVE DESTINATION lib)
install(DIRECTORY include/ DESTINATION include)
