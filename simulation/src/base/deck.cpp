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

void swap(Card* a, Card* b){
    Card temp = *a;
    *a = *b;
    *b = temp;
    return ;

}

void Deck::shuffle(){
    // fisher yates algorithm
    for (int i=size-1; i>=0; --i){
        int swap_index = std::rand() % (i+1);
        swap(&card_list[i], &card_list[swap_index]);
        
    }
    return ;

}

void Deck::cut(){
    int half_size = size / 2;
    int first_half = 0, second_half = half_size;
    for (int i=0; i<half_size; i++){
        swap(&card_list[first_half], &card_list[second_half]);
        first_half++;
        second_half++;
    }

}

void Deck::riffle(){
    std::vector<Card> left_stack = {}, right_stack = {};
    int card_list_size = size;
    bool left_turn = true;
    for (int i=0; i<card_list_size; i++){
        if (left_turn){
            left_stack.push_back(card_list[i]);
            left_turn = false;

        } else {
            right_stack.push_back(card_list[i]);
            left_turn = true;
            
        }
    }

    int left_index = 0, right_index = 0;
    left_turn = true;

    for (int i=0; i<card_list_size; i++){
        if (left_turn){
            card_list[i] = left_stack[left_index];
            left_turn = false;
            left_index++;

        } else {
            card_list[i] = right_stack[right_index];
            left_turn = true;
            right_index++;

        }

    }

}

void Deck::formal_shuffle(){
    for (int i=0; i<3; i++){
        shuffle();
        cut();
        riffle();
        shuffle();
    }
    cut();

}

// GETTER && SETTER //
std::vector<Card> Deck::get_card_list(){
    return card_list;

}

int Deck::get_size(){
    return size;
    
}

void Deck::set_card_list(std::vector<Card> new_card_list){
    card_list = new_card_list;
    size = card_list.size();
    return ;

}