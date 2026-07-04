cmake_minimum_required(VERSION 4.2)
project(Rubiks_Cube_Solver)

set(CMAKE_CXX_STANDARD 23)

add_executable(Rubiks_Cube_Solver main.cpp
        Model/GenericRubiksCube.cpp
        Model/GenericRubiksCube.h
        Model/RubiksCube3DArray.cpp
        Model/RubiksCube1DArray.cpp
        Model/RubiksCubeBitboard.cpp
        Solver/DFSSolver.h
        Solver/BFSSolver.h
        Solver/IDDFSSolver.h
        Solver/IDAstarSolver.h
        PatternDatabases/NibbleArray.cpp
        PatternDatabases/NibbleArray.h
        PatternDatabases/PatternDatabase.cpp
        PatternDatabases/PatternDatabase.h)
