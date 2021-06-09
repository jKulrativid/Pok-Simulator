#include <iostream>
#include <random>
#include <ctime>

#include "deck.hpp"

Deck::Deck(){
    card_list = {};
    deck_size = 0;

}

Deck::~Deck(){

}

Card* Deck::pick_card(){
    Card* picked_card = card_list.back();
    card_list.pop_back();
    --deck_size;
    return picked_card;
    
}

void Deck::add_card_on_top(Card* card){
    card_list.push_back(card);
    ++deck_size;
    return ;

}

// GETTER && SETTER //
std::vector<Card*>* Deck::get_card_list(){
    return &card_list;

}

int Deck::get_deck_size(){
    return deck_size;
    
}

void Deck::set_card_list(std::vector<Card*>* new_card_list){
    card_list = *new_card_list;
    deck_size = card_list.size();
    return ;

}