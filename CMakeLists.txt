cmake_minimum_required(VERSION 3.13)
project(APS)

set(CMAKE_CXX_STANDARD 11)

add_executable(APS main.cpp List/List.cpp List/List.h List/listNode.cpp List/listNode.h List/dListNode.cpp List/dListNode.h Stack/Stack.cpp Stack/Stack.h Queue/Queue.cpp Queue/Queue.h Queue/queueNode.cpp Queue/queueNode.h Sort/Sort.cpp Sort/Sort.h Graph/Graph.cpp Graph/Graph.h DisjointSet/DisjointSet.cpp DisjointSet/DisjointSet.h)