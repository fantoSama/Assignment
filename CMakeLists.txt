cmake_minimum_required(VERSION 3.22)
project(Assignment)

set(CMAKE_CXX_STANDARD 11)

add_executable(Assignment main.cpp Func.h  Func.cpp ROBDD.h ROBDD.cpp)
