include(FetchContent)

FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/release-1.12.1.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_executable(check test_formatter.cpp test_solver.cpp)
target_link_libraries(check PRIVATE formatter_ex solver GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(check)
