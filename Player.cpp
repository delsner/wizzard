//
// Created by Daniel Elsner on 13.06.17.
//

#include "Player.h"

void Player::increment_amount_of_tricks() {
    current_number_of_tricks++;
}

int Player::request_guess() {
    return 0;
}

Card Player::request_trick(Colors::Color color) {
    return Card(YELLOW, FOUR);
}

void Player::evaluate() {
    point_score += current_number_of_tricks;
    if (current_number_of_tricks == current_guess) {
        point_score += 5;
    }
}

