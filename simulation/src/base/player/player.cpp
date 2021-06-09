#include "player.hpp"

Player::Player(){
    name = "Anonymous";
    hand;
    
}

Player::Player(std::string new_name){
    name = new_name;
    hand;

}

Player::~Player(){

}

void Player::obtain_card(Card* card){
    hand.add_card(card);

}

int Player::get_score(){
    int score = 0;
    for (Card* card: *hand.get_holding_cards()){
        score += card->get_value();
    }
    return score % 10;
    
}

void Player::reset_hand(){
    hand.clear();

}

// GETTER && SETTER //
std::string Player::get_name(){
    return name;

}

Hand* Player::get_hand(){
    return &hand;

}

void Player::set_name(std::string new_name){
    name = new_name;

}

void Player::set_hand(Hand* new_hand){
    hand = *new_hand;

}