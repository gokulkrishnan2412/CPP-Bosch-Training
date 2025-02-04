cmake_minimum_required(VERSION 3.10)
project(MyProject)

set(CMAKE_CXX_STANDARD 11)

# Add source files
add_executable(MyProject main.cpp myheader.cpp)

# Add test files
enable_testing()
add_executable(test_main test/test_main.cpp myheader.cpp)

# Link GoogleTest (installed via vcpkg)
find_package(GTest REQUIRED)

# Link Google Test and pthread to your test executable
target_link_libraries(test_main GTest::GTest GTest::Main pthread)

# Add the tests to CTest
add_test(NAME MyTest COMMAND test_main)
