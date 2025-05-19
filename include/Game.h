#ifndef GAME_H
#define GAME_H

#include "CubeBoard.h"
#include "Player.h"

// Class that manages the game logic and flow of a 3D Tic-Tac-Toe game
class Game {
private:
    // Two players participating in the game
    Player player1;
    Player player2;

    // The 3D board where the game is played
    CubeBoard cubeBoard;

    // Pointer to keep track of whose turn it is
    Player* currentPlayer;

public:
    // Constructor: Initializes the game with two players
    Game(const Player& p1, const Player& p2);

    // Starts and manages the main game loop
    void startGame();

    // Checks if the current player has won the game
    // Returns true if there is a winner
    bool checkWinner();

    // Switches to the next player's turn
    void nextTurn();

    // Getters
    Player getPlayer1() const;
    Player getPlayer2() const;
    CubeBoard& getCubeBoard();
    Player* getCurrentPlayer() const;

    // Setters
    void setPlayer1(const Player& p);
    void setPlayer2(const Player& p);
    void setCubeBoard(const CubeBoard& board);
    void setCurrentPlayer(Player* p);
};

#endif // GAME_H
