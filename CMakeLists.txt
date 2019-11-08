cmake_minimum_required(VERSION 3.14)
project(lab2)

set(CMAKE_CXX_STANDARD 17)

add_executable(lab2 main.cpp includes/function.h sourses/function.cpp includes/randomMethod.h sourses/randomMethod.cpp includes/display.h sourses/display.cpp)