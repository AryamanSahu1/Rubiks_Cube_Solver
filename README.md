# Rubik's Cube Solver using Korf's IDA*

A high-performance **3×3 Rubik's Cube Solver** built entirely in **C++**, implementing multiple cube representations, classical and heuristic search algorithms, compressed Pattern Databases, and an OpenCV-powered cube scanner for solving a real physical Rubik's Cube.

The project follows the ideas introduced in **Richard E. Korf's** optimal Rubik's Cube solving research while focusing on clean software architecture, reusable components, and memory-efficient data structures.

---

## Demo

> Scan a physical Rubik's Cube using a webcam → Detect sticker colors → Construct the cube virtually → Solve it using Korf's IDA* Algorithm.
<img width="978" height="576" alt="Screenshot 2026-07-07 033339" src="https://github.com/user-attachments/assets/8772f56d-6893-45ff-af7a-72cddc1d2e97" />
<img width="1257" height="989" alt="Screenshot 2026-07-07 033311" src="https://github.com/user-attachments/assets/5424f7f0-ac39-4ad3-9162-38e71417c5c5" />



---

# Features

### Multiple Cube Representations

The solver supports three interchangeable cube representations.

- 3D Array Representation
- 1D Array Representation
- Bitboard Representation

Each representation implements the same abstract interface, allowing every solver to work without modification.

---

### Multiple Search Algorithms

Implemented from scratch

- Depth First Search (DFS)
- Breadth First Search (BFS)
- Iterative Deepening DFS (IDDFS)
- Korf's IDA* (Iterative Deepening A*)

This allows comparison between uninformed and heuristic search techniques.

---

### Corner Pattern Database

Implemented a compressed Corner Pattern Database used as the heuristic for IDA*.

Features include

- Pattern Database generation using BFS
- Permutation-based indexing
- Nibble Array compressed storage
- Binary database serialization

The Pattern Database significantly reduces the search space explored during solving.

---

### OpenCV Cube Scanner

The project includes an integrated Cube Scanner capable of

- Capturing all six cube faces
- Detecting sticker colors
- Constructing the cube automatically
- Passing the generated cube directly to the solver

---
<img width="978" height="576" alt="Screenshot 2026-07-07 033339" src="https://github.com/user-attachments/assets/59c21ec4-eace-4a99-ba51-c8d7d22b0998" /> 
<img width="1257" height="989" alt="Screenshot 2026-07-07 033311" src="https://github.com/user-attachments/assets/1dbf3272-83b8-4e47-a6a7-dd7f24aa7f20" />
<img width="981" height="568" alt="Screenshot 2026-07-07 034109" src="https://github.com/user-attachments/assets/27681868-0789-421d-9c67-f9ca5bc05444" />
<img width="1260" height="993" alt="Screenshot 2026-07-07 034124" src="https://github.com/user-attachments/assets/11b19815-4668-4bee-bfbf-5c133d9b314b" />
<img width="1008" height="577" alt="Screenshot 2026-07-07 034223" src="https://github.com/user-attachments/assets/b1257c54-1d5e-40f1-9353-6aabdb019dd3" />
<img width="1264" height="993" alt="Screenshot 2026-07-07 034235" src="https://github.com/user-attachments/assets/4a5285c8-b42a-4e9c-9c86-a6765f9fa323" />
<img width="1289" height="567" alt="Screenshot 2026-07-07 034353" src="https://github.com/user-attachments/assets/0d258aa1-92c9-411b-b763-5fd12594076c" />
<img width="1255" height="988" alt="Screenshot 2026-07-07 034403" src="https://github.com/user-attachments/assets/76099494-f563-4ec6-9580-c9e8447b6b89" />
<img width="1144" height="560" alt="Screenshot 2026-07-07 034441" src="https://github.com/user-attachments/assets/7f604e8f-4fe6-43b1-af7d-5d4a4cd9c4c1" />
<img width="1258" height="988" alt="Screenshot 2026-07-07 034456" src="https://github.com/user-attachments/assets/3346c780-6cb9-4916-883f-8604ec2c6bcb" />
<img width="1035" height="577" alt="Screenshot 2026-07-07 035434" src="https://github.com/user-attachments/assets/8b2e7a75-bb49-4f72-a6b1-a8782c073389" />
<img width="1262" height="989" alt="Screenshot 2026-07-07 035445" src="https://github.com/user-attachments/assets/eefcec14-0612-4d8f-99df-0a066190a2a3" />





# Software Architecture

```text
                    Webcam
                       │
                       ▼
              OpenCV Cube Scanner
                       │
                       ▼
             Color Classification
                       │
                       ▼
          Generic Rubik's Cube Model
                       │
       ┌───────────────┼───────────────┐
       │               │               │
   3D Array       1D Array       Bitboard
                       │
                       ▼
          Corner Pattern Database
                       │
                       ▼
               Korf's IDA* Solver
                       │
                       ▼
             Optimal Solution Moves
```

---

# Performance

The solver was benchmarked on randomly generated scrambles.

| Scramble Length | Average Solve Time |
|-----------------|-------------------:|
| 12 Moves | **< 3 seconds** |
| 13 Moves | **≈ 12 seconds** |

(Current implementation uses a Corner Pattern Database generated to depth 7.)
---
<img width="364" height="460" alt="Screenshot 2026-07-07 035525" src="https://github.com/user-attachments/assets/8ec58a82-df0a-44f1-82d1-448553a35b72" />
<img width="388" height="507" alt="Screenshot 2026-07-07 035539" src="https://github.com/user-attachments/assets/6c0be06d-db4a-4962-bab9-7f2e6d203a24" />

# Project Structure

```
Rubiks-Cube-Solver
│
├── Model
│   ├── GenericRubiksCube
│   ├── RubiksCube3DArray
│   ├── RubiksCube1DArray
│   └── RubiksCubeBitboard
│
├── Solver
│   ├── DFSSolver
│   ├── BFSSolver
│   ├── IDDFSSolver
│   └── IDAstarSolver
│
├── PatternDatabases
│   ├── PatternDatabase
│   ├── CornerPatternDatabase
│   ├── CornerDBMaker
│   ├── NibbleArray
│   └── PermutationIndexer
│
├── Scanner
│   └── CubeScanner
│
├── Databases
│
└── main.cpp
```

---

# Key Concepts Implemented

### Algorithms

- Graph Search
- Heuristic Search
- Iterative Deepening
- Pattern Databases
- Permutation Ranking

### Data Structures

- Bitboards
- Hash Maps
- Priority Queues
- Queues
- Nibble Arrays

### C++ Concepts

- Object-Oriented Programming
- Templates
- Runtime Polymorphism
- Inheritance
- Operator Overloading
- Custom Hash Functions

### Computer Vision

- OpenCV
- HSV Color Detection
- Median Filtering
- Webcam Integration

---

# Research Reference

This project is inspired by

**Richard E. Korf**

**Finding Optimal Solutions to Rubik's Cube Using Pattern Databases**

[https://www.cs.princeton.edu/courses/archive/fall06/cos402/papers/korf.pdf](https://www.cs.princeton.edu/courses/archive/fall06/cos402/papers/korfrubik.pdf)

---

# Future Improvements

- Larger Pattern Databases
- Edge Pattern Database
- Complete Korf Heuristic
- Move Pruning<img width="1289" height="758" alt="Screenshot 2026-07-07 034352" src="https://github.com/user-attachments/assets/5509164e-2b4b-4f82-89bf-8a3215712a30" />

- Automatic Color Calibration
- Parallel Pattern Database Generation

---

# Author

**Aryaman Sahu**

B.Tech Computer Science & Engineering

Birla Institute of Technology, Mesra 
