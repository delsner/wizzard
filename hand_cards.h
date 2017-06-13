//
// Created by Daniel Elsner on 13.06.17.
//

#ifndef WIZZARD_CPP_HAND_CARDS_H
#define WIZZARD_CPP_HAND_CARDS_H


#include <vector>
#include "card.h"

class HandCards {
std::vector<Card> cards;
public:
    HandCards(const std::vector<Card, std::allocator<Card>> &cards) : cards(cards) {}

    // this method removes cards from deck
    std::vector<Card> get_cards(int amount);

};


#endif //WIZZARD_CPP_HAND_CARDS_H
