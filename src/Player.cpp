#include "../include/Player.h"

Player::Player(string n, char s) : name(n), symbol(s) {}

string Player::getName() const {
    return name;
}

char Player::getSymbol() const {
    return symbol;
}