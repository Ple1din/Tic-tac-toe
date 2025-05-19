#ifndef PLAYER_H
#define PLAYER_H

#include <string>
using namespace std;

// Class representing a player in the Tic-Tac-Toe game
class Player {
private:
    // Name of the player
    string name;

    // Symbol representing the player ('X' or 'O')
    char symbol;

public:
    // Constructor: Initializes the player with a name and symbol
    // Defaults: empty name and symbol 'X'
    Player(string n = "", char s = 'X');

    // Getter for the player's name
    string getName() const;

    // Getter for the player's symbol
    char getSymbol() const;

    // Setter for the player's name
    void setName(const string& newName);

    // Setter for the player's symbol
    void setSymbol(char newSymbol);
};

#endif // PLAYER_H
