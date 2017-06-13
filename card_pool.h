//
// Created by Daniel Elsner on 13.06.17.
//

#ifndef WIZZARD_CPP_CARD_POOL_H
#define WIZZARD_CPP_CARD_POOL_H


#include <vector>
#include "card.h"

class CardPool {
    std::vector<Card> cards;
    Colors::Color trump;
public:
    CardPool();

    void push_card_into_pool(Card card);

    void clear_pool();

    Colors::Color get_current_color();

    int determine_winner();
};


#endif //WIZZARD_CPP_CARD_POOL_H
