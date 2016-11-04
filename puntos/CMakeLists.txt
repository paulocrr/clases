cmake_minimum_required(VERSION 3.6)
project(puntos)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    main.cpp
    Point.cpp
    Point.h
    Polygon.cpp
    Polygon.h
    Vector.cpp
    Vector.h)

add_executable(puntos ${SOURCE_FILES})