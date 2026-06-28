#include <iostream>
#include <bits/stdc++.h>
#include "model/RubiksCube3DArray.cpp"
#include "model/RubiksCube1DArray.cpp"
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
using namespace std;
int main() {
    RubiksCube3DArray object3DArray;
    object3DArray.f();
    object3DArray.fprime();
    object3DArray.f2();
    object3DArray.u();
    object3DArray.uprime();
    object3DArray.u2();
    object3DArray.r();
    object3DArray.rprime();
    object3DArray.r2();
    object3DArray.();
    object3DArray.print();
    object3DArray.invert(GenericRubiksCube::MOVE::R);
    object3DArray.invert(GenericRubiksCube::MOVE::U);
    object3DArray.invert(GenericRubiksCube::MOVE::F);
    object3DArray.print();
    RubiksCube1DArray object1DArray;
    // object1DArray.f();
    // object1DArray.u();
    // object1DArray.r();
    // object1DArray.print();
    // cout<<((object1DArray.isSolved())?("Solved"):("Not Solved"))<<'\n';
    // object1DArray.invert(GenericRubiksCube::MOVE::R);
    // object1DArray.invert(GenericRubiksCube::MOVE::U);
    // object1DArray.invert(GenericRubiksCube::MOVE::F);
    // object1DArray.print();
    // cout<<((object1DArray.isSolved())?("Solved"):("Not Solved"))<<'\n';
    // object1DArray.print();
    // object1DArray.randomShuffleCube(100);
    // object1DArray.print();
    return 0;
}
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
