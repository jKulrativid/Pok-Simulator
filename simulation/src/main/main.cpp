#include <iostream>

#include <card.hpp>
#include <deck.hpp>
#include <deckfactory.hpp>

int main(){
    DeckFactory factory;
    Deck new_deck = factory.get_new_deck(1);
    Card card = new_deck.pick_card();
    new_deck.shuffle();
    card = new_deck.pick_card();
    std::cout << card.get_rank() << card.get_suit() << "\n";

}