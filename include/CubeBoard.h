#ifndef CUBEBOARD_H
#define CUBEBOARD_H

#include "Board.h"

class CubeBoard {
private:
    Board boards[3];

public:
    void display();
    bool placeMark(int board, int row, int col, char symbol);
    bool checkWin();
    bool isFull();
};

#endif // CUBEBOARD_H