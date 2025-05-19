#ifndef BOARD_H
#define BOARD_H

class Board {
private:
    char grid[3][3];

public:
    Board();
    void display();
    bool placeMark(int row, int col, char symbol);
    bool checkWin();
    bool isFull();
};

#endif // BOARD_H