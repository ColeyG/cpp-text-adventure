cmake_minimum_required(VERSION 3.15)
project(cpp-text-adventure)

set(CMAKE_CXX_STANDARD 20)

add_executable(cpp-text-adventure main.cpp src/controls.cpp src/movement.cpp src/inventory.cpp src/helpers.cpp)