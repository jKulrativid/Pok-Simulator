#include <iostream>
#include <vector>

#include <deck.hpp>
#include <card.hpp>

#include "deckfactory.hpp"

DeckFactory::DeckFactory(){
    
}

DeckFactory::~DeckFactory(){

}

void add_one_stack(Deck* deck){
    std::string ranks[] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};
    std::string suits[] = {"S", "H", "D", "C"};
    for (auto r: ranks){
        for (auto s: suits){
            Card *card = new Card(r, s);
            deck->add_card_on_top(card);

        }
    }
}

Deck DeckFactory::get_new_deck(int stacks){
    Deck deck;
    if (stacks < 1){
        stacks = 1;
    }
    for (int i=0; i<stacks; i++){
        add_one_stack(&deck);
    }
    return deck;

}