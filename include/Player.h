#ifndef PLAYER_H
#define PLAYER_H

#include <string>
using namespace std;

class Player {
private:
    string name;
    char symbol;

public:
    Player(string n = "", char s = 'X');
    string getName() const;
    char getSymbol() const;
};

#endif // PLAYER_H