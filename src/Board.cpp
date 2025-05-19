#include "../include/Board.h"
#include <iostream>
using namespace std;

Board::Board() {
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            grid[i][j] = '-';
}

void Board::display() {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
}

bool Board::placeMark(int row, int col, char symbol) {
    if (row < 0 || row >= 3 || col < 0 || col >= 3) return false;
    if (grid[row][col] != '-') return false;
    grid[row][col] = symbol;
    return true;
}

bool Board::checkWin() {
    // TODO: Implement standard Tic-Tac-Toe win condition.
    return false;
}

bool Board::isFull() {
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            if (grid[i][j] == '-') return false;
    return true;
}
