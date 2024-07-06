cmake_minimum_required(VERSION 3.10)
project(tool LANGUAGES CXX)

set(CMAKE_C_COMPILER "/usr/bin/clang")
set(CMAKE_CXX_COMPILER "/usr/bin/clang++")
# set(CMAKE_CXX_STANDARD 17)

message(STATUS "Project source dir: ${CMAKE_CURRENT_SOURCE_DIR}")
message(STATUS "Project binary dir: ${CMAKE_CURRENT_BINARY_DIR}")

if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/test.cpp")
    message(STATUS "test.cpp found")
else()
    message(STATUS "test.cpp not found")
endif()

add_executable(${PROJECT_NAME} "${CMAKE_CURRENT_SOURCE_DIR}/test.cpp")
set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 17)