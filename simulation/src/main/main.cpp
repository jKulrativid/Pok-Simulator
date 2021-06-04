#include <iostream>

#include <card.hpp>
#include <deck.hpp>
#include <deckfactory.hpp>

int main(){
    DeckFactory factory;
    Deck new_deck = factory.get_new_deck(2);

}