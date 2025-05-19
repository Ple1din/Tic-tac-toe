#include "../include/Game.h"
#include <iostream>
using namespace std;

Game::Game(const Player& p1, const Player& p2) : player1(p1), player2(p2) {
    currentPlayer = &player1;
}

void Game::startGame() {
    int board, row, col;
    while (true) {
        cubeBoard.display();
        cout << currentPlayer->getName() << "'s Turn (" << currentPlayer->getSymbol() << ")\n";
        cout << "Enter Board [0-2], Row [0-2], Column [0-2]: ";
        cin >> board >> row >> col;

        if (cubeBoard.placeMark(board, row, col, currentPlayer->getSymbol())) {
            if (cubeBoard.checkWin()) {
                cout << "Player " << currentPlayer->getName() << " is the winner!!\n";
                cout << "-- GAME OVER --\n";
                return;
            }
            nextTurn();
        } else {
            cout << "Invalid move, try again.\n";
        }

        if (cubeBoard.isFull()) {
            cout << "-- GAME OVER --\n";
            return;
        }
    }
}

void Game::nextTurn() {
    currentPlayer = (currentPlayer == &player1) ? &player2 : &player1;
}
