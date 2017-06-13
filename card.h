//
// Created by Daniel Elsner on 13.06.17.
//

#ifndef WIZZARD_CPP_CARD_H
#define WIZZARD_CPP_CARD_H


#include "color.h"
#include "card_value.h"

class Card {
    Colors::Color color;
    CardValues::CardValue cardValue;
public:
    Card(Colors::Color color, CardValues::CardValue cardValue) : color(color), cardValue(cardValue) {}

    Colors::Color getColor() const {
        return color;
    }

    CardValues::CardValue getCardValue() const {
        return cardValue;
    }
};


#endif //WIZZARD_CPP_CARD_H
