cmake_minimum_required(VERSION 3.2 FATAL_ERROR)

# Name of the project:
project(rguignar-template VERSION 0.1 LANGUAGES C CXX)

# Set C++11
set (CMAKE_CXX_STANDARD 11)

enable_testing()

# Tell add_subdirectories where is the executables location 
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

include_directories(include)
add_subdirectory(src)
add_subdirectory(test)