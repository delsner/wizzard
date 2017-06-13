//
// Created by Daniel Elsner on 13.06.17.
//

#ifndef WIZZARD_CPP_PLAYER_H
#define WIZZARD_CPP_PLAYER_H


#include <string>
#include "hand_cards.h"

class Player {
    HandCards cards;
    std::string name;
    int current_guess = -1;
    int current_number_of_tricks = -1;
    unsigned int point_score = 0;
public:
    const HandCards &getCards() const {
        return cards;
    }

    void setCards(const HandCards &cards) {
        Player::cards = cards;
    }

    const std::string &getName() const {
        return name;
    }

    void setName(const std::string &name) {
        Player::name = name;
    }

    int getCurrent_guess() const {
        return current_guess;
    }

    void setCurrent_guess(int current_guess) {
        Player::current_guess = current_guess;
    }

    unsigned int getScore() const {
        return score;
    }

    void setScore(unsigned int score) {
        Player::score = score;
    }

    int getCurrent_number_of_tricks() const {
        return current_number_of_tricks;
    }

    void setCurrent_number_of_tricks(int current_number_of_tricks) {
        Player::current_number_of_tricks = current_number_of_tricks;
    }

    void increment_amount_of_tricks();

    unsigned int getPoint_score() const {
        return point_score;
    }

    void setPoint_score(unsigned int point_score) {
        Player::point_score = point_score;
    }

    int request_guess();

    void evaluate();

    Card request_trick(Colors::Color color);
};


#endif //WIZZARD_CPP_PLAYER_H
