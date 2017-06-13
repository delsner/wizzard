#include <iostream>
#include "game.h"

int main() {
    Game game;
    Player player1;
    Player player2;
    game.add_player_to_game(player1);
    game.add_player_to_game(player2);
    game.start();

}