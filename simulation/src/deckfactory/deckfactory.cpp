#include <iostream>
#include <vector>

#include <rank.hpp>
#include <suit.hpp>

#include "deckfactory.hpp"

DeckFactory::DeckFactory(){
    
}

DeckFactory::~DeckFactory(){

}

void add_one_stack(Deck* deck){
    for (auto r: ranks){
        for (auto s: suits){
            Card *card = new Card(r, s);
            deck->add_card_on_top(card);

        }
    }
}

Deck* DeckFactory::get_new_deck(int stack_amount){
    Deck* deck = new Deck();
    if (stack_amount < 1){
        stack_amount = 1;
    }
    for (int i=0; i<stack_amount; i++){
        add_one_stack(deck);
    }
    return deck;

}