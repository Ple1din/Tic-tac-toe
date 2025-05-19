#include "../include/CubeBoard.h"
#include <iostream>
using namespace std;

// Displays the current state of all three boards (layers of the cube)
void CubeBoard::display() {
    for (int i = 0; i < 3; ++i) {
        cout << "Board " << i + 1 << ":\n";
        boards[i].display();
    }
}

// Places a mark on the specified board and position
// Returns false if the board index is invalid or the move is not possible
bool CubeBoard::placeMark(int board, int row, int col, char symbol) {
    if (board < 0 || board >= 3) return false; // Invalid board index
    return boards[board].placeMark(row, col, symbol);
}

// Checks if there is a winning condition across the 3D cube
bool CubeBoard::checkWin() {
    // Check individual boards for a win
    for (int i = 0; i < 3; ++i) {
        if (boards[i].checkWin()) return true;
    }

    // Check vertical wins across layers
    for (int row = 0; row < 3; ++row) {
        for (int col = 0; col < 3; ++col) {
            char symbol = boards[0].getCell(row, col);
            if (symbol != '-' &&
                symbol == boards[1].getCell(row, col) &&
                symbol == boards[2].getCell(row, col))
                return true;
        }
    }

    // Check diagonals across layers
    for (int i = 0; i < 3; ++i) {
        char symbol = boards[0].getCell(i, i);
        if (symbol != '-' &&
            symbol == boards[1].getCell(i, i) &&
            symbol == boards[2].getCell(i, i))
            return true;

        symbol = boards[0].getCell(i, 2 - i);
        if (symbol != '-' &&
            symbol == boards[1].getCell(i, 2 - i) &&
            symbol == boards[2].getCell(i, 2 - i))
            return true;
    }

    // Check depth-based vertical wins
    for (int col = 0; col < 3; ++col) {
        for (int depth = 0; depth < 3; ++depth) {
            char symbol = boards[0].getCell(depth, col);
            if (symbol != '-' &&
                symbol == boards[1].getCell(depth, col) &&
                symbol == boards[2].getCell(depth, col))
                return true;
        }
    }

    return false; // No win found
}

// Checks if all boards are full (game draw condition)
bool CubeBoard::isFull() {
    for (int i = 0; i < 3; ++i) {
        if (!boards[i].isFull()) return false;
    }
    return true;
}

// Getter: Returns a reference to a specific board by index
Board& CubeBoard::getBoard(int index) {
    if (index < 0 || index >= 3) {
        throw out_of_range("Board index must be between 1 and 3.");
    }
    return boards[index];
}

// Setter: Replaces a board at the specified index
void CubeBoard::setBoard(int index, const Board& newBoard) {
    if (index < 0 || index >= 3) {
        throw out_of_range("Board index must be between 1 and 3.");
    }
    boards[index] = newBoard;
}
