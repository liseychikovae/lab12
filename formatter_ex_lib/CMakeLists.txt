add_library(formatter_ex STATIC sources/formatter_ex.cpp)
target_include_directories(formatter_ex PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
)
target_link_libraries(formatter_ex PUBLIC formatter)

install(TARGETS formatter_ex ARCHIVE DESTINATION lib)
install(DIRECTORY include/ DESTINATION include)
