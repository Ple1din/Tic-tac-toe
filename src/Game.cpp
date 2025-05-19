#include "../include/Game.h"
#include <iostream>
using namespace std;

// Constructor: Initializes the players and sets the starting player to player1
Game::Game(const Player& p1, const Player& p2) : player1(p1), player2(p2) {
    currentPlayer = &player1;
}

// Starts the main game loop and manages turns, input, and game state
void Game::startGame() {
    int board, row, col;

    while (true) {
        cubeBoard.display();

        cout << currentPlayer->getName() << "'s Turn (" << currentPlayer->getSymbol() << ")\n";
        cout << "Enter Board [1-3], Row [1-3], Column [1-3]: ";
        cin >> board >> row >> col;

        if (cubeBoard.placeMark(board - 1, row - 1, col - 1, currentPlayer->getSymbol())) {
            if (cubeBoard.checkWin()) {
                cubeBoard.display();
                cout << "Player " << currentPlayer->getName() << " is the winner!!\n";
                cout << "-- GAME OVER --\n";
                return;
            }
            nextTurn();
        } else {
            cout << "Invalid move, try again.\n";
        }

        if (cubeBoard.isFull()) {
            cubeBoard.display();
            cout << "It's a draw!\n";
            cout << "-- GAME OVER --\n";
            return;
        }
    }
}

// Switches the current player to the other player
void Game::nextTurn() {
    currentPlayer = (currentPlayer == &player1) ? &player2 : &player1;
}

//Getters

Player Game::getPlayer1() const {
    return player1;
}

Player Game::getPlayer2() const {
    return player2;
}

CubeBoard& Game::getCubeBoard() {
    return cubeBoard;
}

Player* Game::getCurrentPlayer() const {
    return currentPlayer;
}

//Setters

void Game::setPlayer1(const Player& p) {
    player1 = p;
}

void Game::setPlayer2(const Player& p) {
    player2 = p;
}

void Game::setCubeBoard(const CubeBoard& board) {
    cubeBoard = board;
}

void Game::setCurrentPlayer(Player* p) {
    currentPlayer = p;
}
