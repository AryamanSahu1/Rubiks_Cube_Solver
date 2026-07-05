# Rubik's Cube Solver

A high-performance Rubik's Cube Solver implemented completely in modern C++ using multiple cube representations and state-space search algorithms including **DFS**, **BFS**, and **Korf's IDA\*** with **Corner Pattern Databases**.

The project was built with a strong focus on **Object-Oriented Design**, **Low-Level Design**, **algorithmic optimization**, and **memory-efficient state representation**.

---

## Features

- Multiple Rubik's Cube Representations
  - 3D Array Representation
  - 1D Array Representation
  - Bitboard Representation (64-bit packed encoding)

- Complete Cube Operations
  - All 18 standard cube moves
  - Move inversion
  - Random scrambling
  - Solved-state verification

- Search Algorithms
  - Depth First Search (DFS)
  - Breadth First Search (BFS)
  - Iterative Deepening A* (IDA*)

- Heuristic Search
  - Corner Pattern Database
  - Pattern Database generation using BFS
  - Binary serialization/deserialization of databases
  - Memory-optimized nibble array storage (4-bit per entry)

- Performance Optimizations
  - Bitboard based cube representation
  - Custom hash functions for unordered containers
  - Permutation ranking for compact indexing
  - Corner orientation encoding
  - Compressed heuristic database

---

# Algorithms Implemented

| Algorithm | Purpose |
|-----------|---------|
| DFS | Exhaustive depth-limited search |
| BFS | Optimal shortest-path search |
| IDA* | Optimal heuristic-guided search |
| Pattern Database BFS | Offline heuristic generation |
| Permutation Ranking | Unique indexing of cube states |
| Corner Orientation Encoding | Compact representation of orientations |

---

# Project Architecture

```
                    GenericRubiksCube
                           ▲
        ┌──────────────────┼──────────────────┐
        │                  │                  │
        │                  │                  │
 RubiksCube3DArray  RubiksCube1DArray  RubiksCubeBitboard
        │                  │                  │
        └──────────────────┼──────────────────┘
                           │
                 Search Algorithms
          ┌────────────┬──────────────┬─────────────┐
          │            │              │
         DFS          BFS           IDA*
                                         │
                                         ▼
                           Corner Pattern Database
                                         │
                                         ▼
                              Nibble Array Storage
```

---

# Cube Representations

### 3D Array

```
char cube[6][3][3]
```

- Simple and intuitive implementation
- Easy to visualize
- Useful for debugging

---

### 1D Array

```
char cube[54]
```

- Better cache locality
- Reduced memory overhead
- Faster indexing

---

### Bitboard Representation

```
uint64_t bitboard[6]
```

Each face is packed into a 64-bit integer where every sticker occupies one byte.

Advantages:

- Extremely compact
- Fast bitwise operations
- Efficient move execution
- Excellent hashing performance

---

# Pattern Database

The heuristic is generated using a **Corner Pattern Database**.

Implemented features:

- Corner permutation indexing
- Corner orientation indexing
- Permutation ranking
- Binary database serialization
- Binary database loading
- Nibble-compressed storage

Database index:

```
Index = PermutationRank × 3⁷ + OrientationRank
```

---

# Memory Optimization

Instead of storing one byte for every database entry,

the project implements a custom **Nibble Array**.

```
1 byte

+--------+--------+
| 4 bits | 4 bits |
+--------+--------+

stores

2 heuristic values
```

This reduces the heuristic database memory usage by approximately **50%**.

---

# Object-Oriented Design

The project demonstrates several OOP concepts:

- Abstraction
- Runtime Polymorphism
- Inheritance
- Virtual Interfaces
- Composition
- Operator Overloading
- Template Programming

Example:

```
GenericRubiksCube
        ▲
        │
Multiple Cube Representations

↓

Search algorithms work on any representation
without changing a single line of solver code.
```

---

# Low-Level Design

The codebase follows a modular architecture where each component has a single responsibility.

| Component | Responsibility |
|-----------|---------------|
| GenericRubiksCube | Abstract cube interface |
| Cube Models | State representation |
| Search Solvers | Search algorithms |
| Pattern Database | Heuristic storage |
| NibbleArray | Memory compression |
| PermutationIndexer | State ranking |
| CornerDBMaker | Offline heuristic generation |

---

# Technologies Used

- Modern C++
- STL
- Templates
- Bit Manipulation
- Binary File I/O
- Hashing
- Object-Oriented Programming

---

# Performance-Oriented Techniques

- Bitboard Encoding
- Custom Hash Functions
- State Compression
- Permutation Ranking
- Pattern Databases
- Memory-efficient Nibble Storage
- Heuristic-guided Search

---

# Future Improvements

- Edge Pattern Database
- Full Korf Two-Pattern Heuristic
- Parallel Pattern Database Generation
- SIMD Optimizations
- Multi-threaded Search
- God's Number Verification
- Benchmark Suite

---

# Learning Outcomes

This project explores several advanced Computer Science topics:

- State Space Search
- Graph Search Algorithms
- Heuristic Search
- Artificial Intelligence
- Bit Manipulation
- Memory Optimization
- Data Compression
- Algorithm Design
- Object-Oriented Design
- Low-Level System Design

---

# Repository Structure

```
Rubiks-Cube-Solver
│
├── Model/
│   ├── GenericRubiksCube
│   ├── RubiksCube3DArray
│   ├── RubiksCube1DArray
│   └── RubiksCubeBitboard
│
├── Solvers/
│   ├── DFS
│   ├── BFS
│   └── IDAStar
│
├── PatternDatabases/
│   ├── PatternDatabase
│   ├── CornerPatternDatabase
│   ├── CornerDBMaker
│   ├── PermutationIndexer
│   └── NibbleArray
│
└── main.cpp
```

---

# Highlights

- Implemented **three independent Rubik's Cube representations**.
- Developed reusable search algorithms using **template-based generic programming**.
- Built a **memory-compressed heuristic database** using custom nibble arrays.
- Implemented **Korf's IDA\*** search with Pattern Database heuristics.
- Designed a modular architecture allowing different cube representations to plug into the same solver.
- Optimized state storage using **bitboards**, **custom hashing**, and **permutation ranking**.

---

## Author

**Aryaman Sahu**
