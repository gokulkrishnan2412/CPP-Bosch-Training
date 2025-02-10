cmake_minimum_required(VERSION 3.10)

# Set the project name and version
project(SwapProject VERSION 1.0)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add source files to the project
add_executable(SwapTest swap_call_by_value_call_by_reference.cpp)


