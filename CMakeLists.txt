cmake_minimum_required(VERSION 3.28)

project(test_lib LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(test_lib STATIC)

set(SOURCES
    src/parent.cppm
    src/child.cppm
    src/test_module.cppm
)

target_sources(test_lib PRIVATE FILE_SET cxx_modules TYPE CXX_MODULES FILES ${SOURCES})

set(CPP_SOURCES
    src/child_impl.cpp
)

target_sources(test_lib PRIVATE ${CPP_SOURCES})

target_compile_features(test_lib PUBLIC cxx_std_20)
