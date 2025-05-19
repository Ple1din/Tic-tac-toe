#ifndef BOARD_H
#define BOARD_H

// Class representing the game board for a Tic-Tac-Toe game
class Board {
private:
    // 3x3 grid to store the state of the board ('X', 'O', or empty)
    char grid[3][3];

public:
    // Constructor: Initializes the board with empty cells
    Board();

    // Displays the current state of the board on the console
    void display();

    // Places a mark ('X' or 'O') at the specified position
    // Returns true if the move was successful, false if the cell is already occupied or invalid
    bool placeMark(int row, int col, char symbol);

    // Checks if there is a winning condition on the board
    // Returns true if a player has won, false otherwise
    bool checkWin();

    // Checks if the board is completely filled with marks
    // Returns true if the board is full, indicating a draw if no player has won
    bool isFull();

    // Returns the symbol at the specified cell (row, col)
    // This method is constant as it does not modify the board state
    char getCell(int row, int col) const;

};

#endif // BOARD_H
