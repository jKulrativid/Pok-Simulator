#include <iostream>

#include <card.hpp>
#include <deck.hpp>
#include <player.hpp>
#include <deckfactory.hpp>

int main(){
    
    DeckFactory df;
    Deck test_deck = df.get_new_deck(1);
    test_deck.formal_shuffle();
    Card c = test_deck.pick_card();
    std::cout << c.get_rank() << c.get_suit() << std::endl;

}