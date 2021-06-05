#include <iostream>
#include <vector>
#include <random>

#include "deck.hpp"

Deck::Deck(){
    std::vector<Card*> card_list(0);
    size = 0;

}

Deck::~Deck(){
    std::vector<Card*> card_list;

}

Card* Deck::pick_card(){
    Card* c = card_list.back();
    card_list.pop_back();
    --size;
    return c;
    
}

void Deck::add_card_on_top(Card* card){
    card_list.push_back(card);
    ++size;
    return ;

}

void Deck::shuffle(){
    // fisher yates algorithm
    std::default_random_engine rand;
    std::uniform_int_distribution<int> distribution(1, size);
    for (int i=size-1; i>0; --i){
        int random_number = distribution(rand);
        int swap_index = random_number % i;
        Card* temp_card = card_list[i];
        card_list[i] = card_list[swap_index];
        card_list[swap_index] = temp_card;
        
    }
    return ;

}

// GETTER && SETTER //
std::vector<Card*> Deck::get_card_list(){
    return card_list;

}

void Deck::set_card_list(std::vector<Card*> new_card_list){
    card_list = new_card_list;
    size = card_list.size();
    return ;

}