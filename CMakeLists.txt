cmake_minimum_required(VERSION 3.25)

# Project information
project(test_lib LANGUAGES CXX)

# Set C++ standard to C++20
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add the library (static library)
add_library(test_lib STATIC)

# Specify the source files for the modules
set(SOURCES
    src/a.cppm
    src/b.cppm
    src/lib.cppm
)

# Add the module files as sources
target_sources(test_lib PRIVATE ${SOURCES})

# Add include directories if necessary (e.g., headers)
# target_include_directories(test_lib PUBLIC include)

# Enable C++ modules
target_compile_features(test_lib PUBLIC cxx_std_20)
