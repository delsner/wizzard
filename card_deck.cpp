//
// Created by Daniel Elsner on 13.06.17.
//

#include <sys/time.h>
#include <cstdlib>
#include "card_deck.h"

CardDeck::CardDeck() {
    cards = std::vector<Card>();
    for (auto color: Colors::ALL) {
        for (auto value: CardValues::ALL) {
            cards.push_back(Card(color, value));
        }
    }
}

void CardDeck::shuffle_cards() {
    std::random_shuffle(cards.begin(), cards.end(), random_number);
}

std::vector<Card> CardDeck::get_cards(int amount) {
    // create subvector that is returned
    std::vector<Card> subvector;
    copy(cards.begin(), cards.begin() + amount, std::back_inserter(subvector));

    // reduce vector
    cards.erase(cards.begin(), cards.begin() + amount);

    return subvector;
}

int random_number(int i) {
    struct timeval time;
    gettimeofday(&time, NULL);

    // microsecond has 1 000 000
    // Assuming you did not need quite that accuracy
    // Also do not assume the system clock has that accuracy.
    // If you use 100 (rather than 1000) the seed repeats every 248 days.
    srand((time.tv_sec * 100) + (time.tv_usec / 100));

    return std::rand() % i;
}