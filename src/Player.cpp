#include "../include/Player.h"

// Constructor: Initializes name and symbol
Player::Player(string n, char s) : name(n), symbol(s) {}

// Getter for name
string Player::getName() const {
    return name;
}

// Getter for symbol
char Player::getSymbol() const {
    return symbol;
}

// Setter for name
void Player::setName(const string& newName) {
    name = newName;
}

// Setter for symbol
void Player::setSymbol(char newSymbol) {
    symbol = newSymbol;
}
