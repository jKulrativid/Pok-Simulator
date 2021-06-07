#include "player.hpp"

Hand::Hand(){
    holding_cards = {};
    hand_size = 0;

}

Hand::~Hand(){
    
}

void Hand::clear(){
    holding_cards = {};
    hand_size = 0;

}

void Hand::add_card(Card card){
    holding_cards.push_back(card);
    ++hand_size;

}

Card Hand::pick_card(){
    int top_card_index = hand_size-1;
    Card picked_card = holding_cards.at(top_card_index);
    holding_cards.erase(holding_cards.end());
    --hand_size;
    return picked_card;

}

// GETTER && SETTER //
std::vector<Card> Hand::get_holding_cards(){
    return holding_cards;

}

int Hand::get_hand_size(){
    return hand_size;

}

void Hand::set_holding_cards(std::vector<Card> new_holding_cards){
    holding_cards = new_holding_cards;

}