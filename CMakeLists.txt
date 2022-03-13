cmake_minimum_required(VERSION 3.21)
project(CPPStl)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_EXE_LINKER_FLAGS "-static")

add_executable(CPPSTL stl_demo_/demo01.cpp stl_demo_/demo01.h)