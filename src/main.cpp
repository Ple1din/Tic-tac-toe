#include "../include/Game.h"
#include "../include/Player.h"

// Entry point of the program
int main() {
    // Create two players with names and symbols
    Player p1("P1", 'X');
    Player p2("P2", 'O');

    // Create the game instance with the two players
    Game game(p1, p2);

    // Start the game loop
    game.startGame();

    return 0;
}
