# Rubik's Cube Solver

A C++ project for modeling a Rubik's Cube, applying moves, and exploring multiple solving strategies. The repository is structured as a research-oriented implementation inspired by the work of Richard Korf, with an emphasis on heuristic-guided search and the practical implementation of IDA* with corner-based pattern database heuristics.

## Overview

This project provides:

- A shared cube abstraction through `GenericRubiksCube`
- Multiple cube implementations with different internal representations
- Search-based solvers such as DFS, BFS, IDDFS, and IDA*
- Pattern database support for corner-based heuristics derived from the principles of modern Rubik's Cube search research
- A sample driver program demonstrating the available functionality

## Project Structure

- [main.cpp](main.cpp) – Example driver code and commented demonstrations
- [Model/](Model/) – Cube model implementations and shared interfaces
  - [Model/GenericRubiksCube.h](Model/GenericRubiksCube.h) – Common cube API and move definitions
  - [Model/RubiksCube3DArray.cpp](Model/RubiksCube3DArray.cpp) – 3D array-based cube implementation
  - [Model/RubiksCube1DArray.cpp](Model/RubiksCube1DArray.cpp) – 1D array-based cube implementation
  - [Model/RubiksCubeBitboard.cpp](Model/RubiksCubeBitboard.cpp) – Bitboard-based cube implementation
- [Solver/](Solver/) – Search algorithms for solving cube states
  - [Solver/DFSSolver.h](Solver/DFSSolver.h)
  - [Solver/BFSSolver.h](Solver/BFSSolver.h)
  - [Solver/IDDFSSolver.h](Solver/IDDFSSolver.h)
  - [Solver/IDAstarSolver.h](Solver/IDAstarSolver.h)
- [PatternDatabases/](PatternDatabases/) – Pattern database generation and related utilities
- [Databases/](Databases/) – Stored database files such as [Databases/cornerDepth5V1.txt](Databases/cornerDepth5V1.txt)

## Features

- Cube initialization and solved-state detection
- Move application and inversion for all standard face turns
- Random cube shuffling for testing and experimentation
- Multiple solver strategies with different trade-offs
- An IDA* implementation guided by corner heuristics for efficient search
- Corner pattern database support for guiding search

## Requirements

- A C++23-compatible compiler
- CMake
- A recent CMake version is required by the current project configuration

## Build Instructions

From the repository root:

```bash
cmake -S . -B build
cmake --build build
```

### Build Note

The project currently declares `cmake_minimum_required(VERSION 4.2)`. In the provided environment, the available CMake version was 3.28.3, so configuration failed until a newer CMake binary is available.

## Running the Program

After building:

```bash
./build/Rubiks_Cube_Solver
```

The sample driver in [main.cpp](main.cpp) contains many commented examples. Uncomment the section you want to explore to test cube operations, shuffling, and solver behavior.

## Usage Notes

The repository is best suited for:

- Understanding Rubik's Cube state representation
- Comparing solver strategies
- Exploring heuristic-based search
- Extending the project with new cube implementations or databases

## License

No license file is currently included in the repository.
