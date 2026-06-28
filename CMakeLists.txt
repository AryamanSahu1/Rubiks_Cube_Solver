cmake_minimum_required(VERSION 4.2)
project(Rubiks_Cube_Solver)

set(CMAKE_CXX_STANDARD 23)

add_executable(Rubiks_Cube_Solver main.cpp
        Model/GenericRubiksCube.cpp
        Model/GenericRubiksCube.h
        Model/RubiksCube3DArray.cpp
        Model/RubiksCube1DArray.cpp
        Model/RubiksCubeBitboard.cpp)
