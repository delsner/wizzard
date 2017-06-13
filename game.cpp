//
// Created by Daniel Elsner on 13.06.17.
//

#include <iostream>
#include "game.h"

void Game::start() {
    //determine number of rounds = 60 cards / player count
    int number_rounds = 60 / players.size();

    std::cout << "LET'S PLAY SOME WIZZARD!" << std::endl;

    for (int i = 1; i <= number_rounds; i++) {
        //create card deck
        card_deck = CardDeck();

        // shuffle card deck
        card_deck.shuffle_cards();

        //start round
        play_round(i);
    }

    //determine winner
    determine_winner();
}

void Game::add_player_to_game(Player &player) {
    players.push_back(player);
}

void Game::play_round(int round_id) {
    deal_to_players(round_id);

    // get guesses
    for (auto p : players) {
        p.request_guess();
    }
    // get tricks
    for (int i = 1; i <= round_id; i++) {
        for (auto p: players) {
            card_pool.push_card_into_pool(p.request_trick(card_pool.get_current_color()));
        }
        // careful: dirty code
        players[card_pool.determine_winner()].increment_amount_of_tricks();
        card_pool.clear_pool();
    }

    for (auto p : players) {
        // evaluate round
        p.evaluate();
        // clear tricks for all players
        p.setCurrent_number_of_tricks(0);
    }

}

Player &Game::determine_winner() {
    return <#initializer#>;
}

void Game::deal_to_players(int amount_of_cards) {
    for (auto p: players) {
        p.setCards(card_deck.get_cards(amount_of_cards));
    }
}
