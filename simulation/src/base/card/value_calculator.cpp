#include <rank.hpp>

#include "card.hpp"

int value_calculator::value_of_card(Card* card){
    std::string rank = card->get_rank();
    return rank_values.at(rank);
    
}