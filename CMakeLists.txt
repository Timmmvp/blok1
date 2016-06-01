cmake_minimum_required(VERSION 2.8.4)
project(blok1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES ex6_1.c)

add_executable(blok1 ${SOURCE_FILES})