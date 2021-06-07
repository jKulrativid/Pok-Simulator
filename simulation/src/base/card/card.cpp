#include "card.hpp"

Card::Card(std::string r, std::string s){
    rank = r;
    suit = s;
    value = value_calculator::value_of_card(this);
    
}

Card::~Card(){

}

std::string Card::get_rank(void){
    return rank;

}

std::string Card::get_suit(void){
    return suit;

}

int Card::get_value(){
    return value;

}