cmake_minimum_required(VERSION 3.7)
project(wizzard_cpp)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp game.cpp game.h Player.cpp Player.h card_deck.cpp card_deck.h card.cpp card.h color.cpp color.h card_value.cpp card_value.h hand_cards.cpp hand_cards.h card_pool.cpp card_pool.h)
add_executable(wizzard_cpp ${SOURCE_FILES})