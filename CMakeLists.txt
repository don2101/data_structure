cmake_minimum_required(VERSION 3.13)
project(APS)

set(CMAKE_CXX_STANDARD 11)

add_executable(APS main.cpp Sort.cpp List/List.cpp List/List.h List/listNode.cpp List/listNode.h List/dListNode.cpp List/dListNode.h Stack/Stack.cpp Stack/Stack.h)