cmake_minimum_required(VERSION 3.23)
project(code_c C)

set(CMAKE_C_STANDARD 11)

add_executable(code_c ../day01/main.c ../day01/Search1.cpp ../day01/StudentManage.cpp ../day01/Stack.cpp ../day01/Stack.cpp ../day01/Queue.cpp ElemType.cpp ElemType.h)
