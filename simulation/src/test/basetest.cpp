#include <iostream>

#include <card.hpp>
#include <deck.hpp>
#include <player.hpp>
#include <deckfactory.hpp>

#include "test.hpp"

void test::base_test(){
    Dealer dealer("Dealer");
    Player p1("Player1"), p2("Player2");
    DeckFactory df;
    dealer.set_deck(df.get_new_deck(1));
    dealer.formal_shuffle();
    dealer.hand_out_card(&p1, 2);
    dealer.hand_out_card(&p2, 2);
    std::cout << p1.get_card_value() << "\n";
    std::cout << p2.get_card_value() << "\n";

}