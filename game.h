//
// Created by Daniel Elsner on 13.06.17.
//

#ifndef WIZZARD_CPP_GAME_H
#define WIZZARD_CPP_GAME_H


#include <vector>
#include "Player.h"
#include "card_deck.h"
#include "card_pool.h"

class Game {
    std::vector<Player> players;
    CardDeck card_deck;
    CardPool card_pool;
public:
    void start();

    void add_player_to_game(Player &player);

    void play_round(int round_id);

    Player& determine_winner();

    void deal_to_players(int amount_of_cards);
};


#endif //WIZZARD_CPP_GAME_H
