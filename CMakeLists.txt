cmake_minimum_required(VERSION 3.30)
project(tiktakrow)

set(CMAKE_CXX_STANDARD 20)

add_executable(tiktakrow main.cpp
        parser.h
        parser.cpp
        game.h)
