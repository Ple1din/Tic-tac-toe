#include "../include/Game.h"
#include "../include/Player.h"

int main() {
    // Crear los dos jugadores
    Player p1("Alice", 'X');
    Player p2("Bob", 'O');

    // Crear la instancia del juego
    Game game(p1, p2);

    // Iniciar el juego
    game.startGame();

    return 0;
}