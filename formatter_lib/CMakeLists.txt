add_library(formatter STATIC sources/formatter.cpp)
target_include_directories(formatter PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
)

install(TARGETS formatter ARCHIVE DESTINATION lib)
install(DIRECTORY include/ DESTINATION include)
