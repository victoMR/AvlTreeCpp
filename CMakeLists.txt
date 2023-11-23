cmake_minimum_required(VERSION 3.26)
project(AVL)

set(CMAKE_CXX_STANDARD 14)

include_directories(. "C:/Python311/Lib/site-packages/matplotlib" "C:/Python311/include")

add_executable(AVL
        main.cpp
        Nodo.cpp
        Nodo.h
        Avl.h
        Avl.cpp)
