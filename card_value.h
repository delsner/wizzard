//
// Created by Daniel Elsner on 13.06.17.
//

#ifndef WIZZARD_CPP_CARD_VALUE_H
#define WIZZARD_CPP_CARD_VALUE_H


namespace CardValues {
    enum CardValue {
        FOOL, ONE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, ELEVEN, TWELVE, THIRTEEN, WIZZARD
    };
    static const CardValue ALL[] = {FOOL, ONE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, ELEVEN, TWELVE,
                                    THIRTEEN, WIZZARD};
}

#endif //WIZZARD_CPP_CARD_VALUE_H
