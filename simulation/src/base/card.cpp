#include "card.hpp"

Card::Card(char r, char s){
    rank = r; suit = s;
    
}

char Card::get_rank(void){
    return rank;

}

char Card::get_suit(void){
    return suit;

}