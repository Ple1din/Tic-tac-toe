#include "../include/Board.h"
#include <iostream>
using namespace std;

// Constructor: Initializes all cells in the board to '-'
Board::Board() {
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            grid[i][j] = '-';
}

// Displays the current state of the board
void Board::display() {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
}

// Places a player's mark on the board at the given position
// Returns false if the position is out of bounds or already occupied
bool Board::placeMark(int row, int col, char symbol) {
    if (row < 0 || row >= 3 || col < 0 || col >= 3) return false; // Invalid position
    if (grid[row][col] != '-') return false; // Cell already occupied
    grid[row][col] = symbol; // Place the symbol
    return true;
}

// Checks if there is a win on the board (rows, columns, or diagonals)
// Returns true if a win condition is met
bool Board::checkWin() {
    // Check rows and columns
    for (int i = 0; i < 3; ++i) {
        if (grid[i][0] != '-' && grid[i][0] == grid[i][1] && grid[i][1] == grid[i][2]) return true;
        if (grid[0][i] != '-' && grid[0][i] == grid[1][i] && grid[1][i] == grid[2][i]) return true;
    }

    // Check diagonals
    if (grid[0][0] != '-' && grid[0][0] == grid[1][1] && grid[1][1] == grid[2][2]) return true;
    if (grid[0][2] != '-' && grid[0][2] == grid[1][1] && grid[1][1] == grid[2][0]) return true;

    // No win condition met
    return false;
}

// Checks if the board is full (no empty cells)
// Returns true if all cells are filled
bool Board::isFull() {
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            if (grid[i][j] == '-') return false; // Found an empty cell
    return true; // No empty cells found
}

// Returns the symbol at the specified cell position
char Board::getCell(int row, int col) const {
    return grid[row][col];
}
