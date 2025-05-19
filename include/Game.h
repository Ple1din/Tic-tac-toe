#ifndef GAME_H
#define GAME_H

#include "CubeBoard.h"
#include "Player.h"

class Game {
private:
    Player player1;
    Player player2;
    CubeBoard cubeBoard;
    Player* currentPlayer;

public:
    Game(const Player& p1, const Player& p2);
    void startGame();
    bool checkWinner();
    void nextTurn();
};

#endif // GAME_H