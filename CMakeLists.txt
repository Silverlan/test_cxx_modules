cmake_minimum_required(VERSION 3.28)

project(test_lib LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

OPTION(DEFINE_IN_HEADER "Define in Header" OFF)

add_library(test_lib STATIC)

set(SOURCES
    src/a.cppm
    src/b.cppm
    src/test_module.cppm
)

target_sources(test_lib PRIVATE FILE_SET cxx_modules TYPE CXX_MODULES FILES ${SOURCES})

set(CPP_SOURCES
    src/a.cpp
)

target_sources(test_lib PRIVATE ${CPP_SOURCES})

IF(DEFINE_IN_HEADER)
    target_compile_definitions(test_lib PUBLIC DEFINE_IN_CLASS)
ENDIF(DEFINE_IN_HEADER)

target_compile_features(test_lib PUBLIC cxx_std_20)
