//
// Created by Daniel Elsner on 13.06.17.
//

#include "card_pool.h"

CardPool::CardPool() {
    cards = std::vector<Card>();
}

void CardPool::push_card_into_pool(Card card) {
    cards.push_back(card);
}

void CardPool::clear_pool() {
    cards = std::vector<Card>();
}

Colors::Color CardPool::get_current_color() {
    for (auto c: cards) {
        if (c.getCardValue() != CardValues::FOOL && c.getCardValue() != CardValues::WIZZARD) {
            return c.getColor();
        }
    }
    // fail gracefully...
    return nullptr;
}

int CardPool::determine_winner() {
    Card max_card = cards[0];
    for (auto &c: cards) {
        // check for fools/wizzards
        if (c.getCardValue() == CardValues::FOOL) {
            continue;
        } else if (c.getCardValue() == CardValues::WIZZARD) {
            if (max_card.getCardValue() != CardValues::WIZZARD) {
                max_card = c;
                continue;
            }
        }

        // regular check for color/trump
        if (c.getColor() == max_card.getColor()) {
            if (c.getCardValue() > max_card.getCardValue()) {
                max_card = c;
            }
        } else if (c.getColor() == trump) {
            if (c.getCardValue() > max_card.getCardValue()) {
                max_card = c;
            }
        }
    }

    return (&max_card - &*(cards.begin()));
}
