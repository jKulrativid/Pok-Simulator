#include <iostream>

#include "card.hpp"

Card::Card(std::string r, std::string s){
    rank = r; suit = s;
    
}

Card::~Card(){

}

std::string Card::get_rank(void){
    return rank;

}

std::string Card::get_suit(void){
    return suit;

}