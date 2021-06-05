#include <iostream>
#include <vector>
#include <random>
#include <ctime>

#include "deck.hpp"

Deck::Deck(){
    card_list = {};
    size = 0;

}

Deck::~Deck(){
    std::vector<Card> card_list;

}

Card Deck::pick_card(){
    Card c = card_list.back();
    card_list.pop_back();
    --size;
    return c;
    
}

void Deck::add_card_on_top(Card card){
    card_list.push_back(card);
    ++size;
    return ;

}

void Deck::shuffle(){
    // fisher yates algorithm
    std::srand(std::time(NULL));
    for (int i=size-1; i>0; --i){
        int swap_index = std::rand() % i;
        Card temp_card = card_list[i];
        card_list[i] = card_list[swap_index];
        card_list[swap_index] = temp_card;
        
    }
    return ;

}

// GETTER && SETTER //
std::vector<Card> Deck::get_card_list(){
    return card_list;

}

void Deck::set_card_list(std::vector<Card> new_card_list){
    card_list = new_card_list;
    size = card_list.size();
    return ;

}