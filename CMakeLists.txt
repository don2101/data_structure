cmake_minimum_required(VERSION 3.13)
project(APS)

set(CMAKE_CXX_STANDARD 11)

add_executable(APS main.cpp Sort.cpp List.cpp List.h listNode.cpp listNode.h)