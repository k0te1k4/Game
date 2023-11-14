cmake_minimum_required(VERSION 3.25)
project(MyGame)

set(CMAKE_CXX_STANDARD 17)

add_executable(MyGame main.cpp Player.cpp Player.h Item.cpp Item.h)
