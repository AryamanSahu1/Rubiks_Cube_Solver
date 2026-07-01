#include <iostream>
#include <bits/stdc++.h>
#include "model/RubiksCube3DArray.cpp"
#include "model/RubiksCube1DArray.cpp"
#include "model/RubiksCubeBitboard.cpp"

#include "solver/DFSSolver.h"
#include "solver/BFSSolver.h"
#include "solver/IDDFSSolver.h"
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
using namespace std;
int main() {
    // Testing DFS Solver

    //Testing for 3D array Model
    // RubiksCube3DArray cube1;

    // DFSSolver<RubiksCube1DArray,Hash1d> solver2(cube2,8);
    // DFSSolver<RubiksCubeBitboard,HashBitboard> solver3(cube3,8);

    // vector<GenericRubiksCube::MOVE> shuffleMoves1=cube1.randomShuffleCube(4);
    // cout << "Shuffled Cube:\n";
    // cube1.print();
    // cout << "Shuffle Moves:\n";
    // for (auto move : shuffleMoves1) cout << GenericRubiksCube::getMove(move) << " ";
    // cout << "\n\n";
    //
    // DFSSolver<RubiksCube3DArray,Hash3d> solver1(cube1,8);
    // vector<GenericRubiksCube::MOVE> solution1=solver1.solve();
    // cout << "Solution Moves:\n";
    // for (auto move : solution1)
    //     cout << GenericRubiksCube::getMove(move) << " ";
    // cout << "\n\n";
    //
    // // Verify the solution
    // for (auto move : solution1)
    //     cube1.move(move);
    //
    // cout << "Cube after applying solution:\n";
    // cube1.print();
    //
    // if (cube1.isSolved()) cout << "Solved Successfully!\n";
    // else cout << "Solution Incorrect!\n";




    //Testing for 1D array Model

    // RubiksCube1DArray cube2;
    //
    // vector<GenericRubiksCube::MOVE> shuffleMoves2=cube2.randomShuffleCube(2);
    // cout << "Shuffled Cube:\n";
    // cube2.print();
    // cout << "Shuffle Moves:\n";
    // for (auto move : shuffleMoves2) cout << GenericRubiksCube::getMove(move) << " ";
    // cout << "\n\n";
    //
    // DFSSolver<RubiksCube1DArray,Hash1d> solver2(cube2,8);
    // vector<GenericRubiksCube::MOVE> solution2=solver2.solve();
    // cout << "Solution Moves:\n";
    // for (auto move : solution2)
    //     cout << GenericRubiksCube::getMove(move) << " ";
    // cout << "\n\n";
    //
    // // Verify the solution
    // for (auto move : solution2)
    //     cube2.move(move);
    //
    // cout << "Cube after applying solution:\n";
    // cube2.print();
    //
    // if (cube2.isSolved()) cout << "Solved Successfully!\n";
    // else cout << "Solution Incorrect!\n";


    //Testing for bitboard model

    // RubiksCubeBitboard cube3;
    // vector<GenericRubiksCube::MOVE> shuffleMoves3=cube3.randomShuffleCube(5);
    // cout << "Shuffled Cube:\n";
    // cube3.print();
    // cout << "Shuffle Moves:\n";
    // for (auto move : shuffleMoves3) cout << GenericRubiksCube::getMove(move) << " ";
    // cout << "\n\n";
    //
    // DFSSolver<RubiksCubeBitboard,HashBitboard> solver3(cube3,8);
    // vector<GenericRubiksCube::MOVE> solution3=solver3.solve();
    // cout << "Solution Moves:\n";
    // for (auto move : solution3)
    //     cout << GenericRubiksCube::getMove(move) << " ";
    // cout << "\n\n";
    //
    // // Verify the solution
    // for (auto move : solution3)
    //     cube3.move(move);
    //
    // cout << "Cube after applying solution:\n";
    // cube3.print();
    //
    // if (cube3.isSolved()) cout << "Solved Successfully!\n";
    // else cout << "Solution Incorrect!\n";



    //Testing BFS solver
    // RubiksCubeBitboard cube3;
    // vector<GenericRubiksCube::MOVE> shuffleMoves3=cube3.randomShuffleCube(5);
    // cout << "Shuffled Cube:\n";
    // cube3.print();
    // cout << "Shuffle Moves:\n";
    // for (auto move : shuffleMoves3) cout << GenericRubiksCube::getMove(move) << " ";
    // cout << "\n\n";
    //
    // BFSSolver<RubiksCubeBitboard,HashBitboard> solver3(cube3);
    // vector<GenericRubiksCube::MOVE> solution3=solver3.solve();
    // cout << "Solution Moves:\n";
    // for (auto move : solution3)
    //     cout << GenericRubiksCube::getMove(move) << " ";
    // cout << "\n\n";
    //
    // // Verify the solution
    // for (auto move : solution3)
    //     cube3.move(move);
    //
    // cout << "Cube after applying solution:\n";
    // cube3.print();
    //
    // if (cube3.isSolved()) cout << "Solved Successfully!\n";
    // else cout << "Solution Incorrect!\n";
    //

    //Testing IDDFS Solver
    RubiksCubeBitboard cube3;
    vector<GenericRubiksCube::MOVE> shuffleMoves3=cube3.randomShuffleCube(9);
    cout << "Shuffled Cube:\n";
    cube3.print();
    cout << "Shuffle Moves:\n";
    for (auto move : shuffleMoves3) cout << GenericRubiksCube::getMove(move) << " ";
    cout << "\n\n";

    IDDFSSolver<RubiksCubeBitboard,HashBitboard> solver3(cube3,10);
    vector<GenericRubiksCube::MOVE> solution3=solver3.solve();
    cout << "Solution Moves:\n";
    for (auto move : solution3)
        cout << GenericRubiksCube::getMove(move) << " ";
    cout << "\n\n";

    // Verify the solution
    for (auto move : solution3)
        cube3.move(move);

    cout << "Cube after applying solution:\n";
    cube3.print();

    if (cube3.isSolved()) cout << "Solved Successfully!\n";
    else cout << "Solution Incorrect!\n";


    return 0;
}
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
