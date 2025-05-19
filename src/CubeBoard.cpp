#include "../include/CubeBoard.h"
#include <iostream>
using namespace std;

void CubeBoard::display() {
    for (int i = 0; i < 3; ++i) {
        cout << "Board " << i << ":\n";
        boards[i].display();
    }
}

bool CubeBoard::placeMark(int board, int row, int col, char symbol) {
    if (board < 0 || board >= 3) return false;
    return boards[board].placeMark(row, col, symbol);
}

bool CubeBoard::checkWin() {
    // TODO: Implement complex 3D win condition logic.
    return false;
}

bool CubeBoard::isFull() {
    for (int i = 0; i < 3; ++i) {
        if (!boards[i].isFull()) return false;
    }
    return true;
}