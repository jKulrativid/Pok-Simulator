#include <iostream>
#include <vector>

#include "deck.hpp"

Deck::Deck(){
    // TODO
    // get card_list from factory method

}

Deck::~Deck(){
    std::vector<Card> card_list;

}

Card Deck::pick_card(){
    Card c = card_list.at(size-1);
    --size;
    return c;
    
}

void Deck::add_card_on_top(Card card){
    card_list.push_back(card);
    ++size;

}

std::vector<Card> Deck::get_card_list(){
    return card_list;

}