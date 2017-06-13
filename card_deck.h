//
// Created by Daniel Elsner on 13.06.17.
//

#ifndef WIZZARD_CPP_CARD_COLLECTION_H
#define WIZZARD_CPP_CARD_COLLECTION_H

#include <vector>
#include "card.h"
#include "Player.h"

class CardDeck {
    std::vector<Card> cards;
public:
    CardDeck();

    void shuffle_cards();

    // this method removes cards from deck
    std::vector<Card> get_cards(int amount);
};


#endif //WIZZARD_CPP_CARD_COLLECTION_H
