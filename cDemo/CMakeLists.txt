cmake_minimum_required(VERSION 3.3)
project(cDemo)

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp LinkStack.h BinaryTree.h)
add_executable(cDemo ${SOURCE_FILES})