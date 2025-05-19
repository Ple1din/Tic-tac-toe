#ifndef CUBEBOARD_H
#define CUBEBOARD_H

#include "Board.h"

// Class representing a 3D Tic-Tac-Toe board composed of 3 separate 2D boards
class CubeBoard {
private:
    // Array of 3 boards representing the layers of the 3D board
    Board boards[3];

public:
    // Displays the current state of all three boards (layers)
    void display();

    // Places a mark ('X' or 'O') on the specified board and cell
    // Parameters:
    // - board: index of the board (0 to 2)
    // - row: row position on the board (0 to 2)
    // - col: column position on the board (0 to 2)
    // - symbol: the player's symbol ('X' or 'O')
    // Returns true if the move was successful, false if invalid
    bool placeMark(int board, int row, int col, char symbol);

    // Checks if there is a winning condition across the 3D board
    // Returns true if a player has won in any dimension (including across boards)
    bool checkWin();

    // Checks if all boards are full (i.e., the game is a draw if no winner)
    // Returns true if all boards are full
    bool isFull();

    // Getter: Returns a reference to a specific board
    // Parameters: board index (0 to 2)
    Board& getBoard(int index);

    // Setter: Replaces a board at a specific index
    // Parameters: board index (0 to 2) and a new Board object
    void setBoard(int index, const Board& newBoard);
};

#endif // CUBEBOARD_H
