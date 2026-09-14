cmake_minimum_required(VERSION 4.2)
project(task_oop)

set(CMAKE_CXX_STANDARD 20)

add_executable(task_oop
        src/main.cpp
        src/MeatHook.cpp
        src/MeatHook.h
        src/Rot.cpp
        src/Rot.h
        src/FleshHeap.cpp
        src/FleshHeap.h
)