cmake_minimum_required(VERSION 3.31)
project(Algorithms)

set(CMAKE_CXX_STANDARD 20)

include_directories(include)

add_executable(Algorithms main.cpp
        src/Array.cpp
        include/Array.h
        src/LinkedList.cpp
        include/LinkedList.h)
