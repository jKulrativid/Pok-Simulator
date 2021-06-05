#include <iostream>

#include <card.hpp>
#include <deck.hpp>
#include <player.hpp>
#include <deckfactory.hpp>

#include "test.hpp"

void test::base_test(){
    DeckFactory df;
    Deck test_deck = df.get_new_deck(1);
    test_deck.shuffle();
    Card c = test_deck.pick_card();
    std::cout << c.get_rank() << c.get_suit() << std::endl;

}