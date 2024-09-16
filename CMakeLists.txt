cmake_minimum_required(VERSION 3.28)

# Project information
project(test_lib LANGUAGES CXX)

# Set C++ standard to C++20
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add the library (static library)
add_library(test_lib STATIC)

# Specify the source files for the modules
set(SOURCES
    src/channel.cppm
    src/event.cppm
    src/util_timeline_scene.cppm
)

# Add the module files as sources
target_sources(test_lib PRIVATE FILE_SET cxx_modules TYPE CXX_MODULES FILES ${SOURCES})

set(CPP_SOURCES
    src/channel.cpp
    src/event.cpp
    src/main.cpp
)

# Add the module files as sources
target_sources(test_lib PRIVATE ${CPP_SOURCES})

# Add include directories if necessary (e.g., headers)
# target_include_directories(test_lib PUBLIC include)

# Enable C++ modules
target_compile_features(test_lib PUBLIC cxx_std_20)
