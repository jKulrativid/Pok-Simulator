#include "player.hpp"

Player::Player(){
    name = "Anonymous";
    hand = {};
    
}

Player::Player(std::string new_name){
    name = new_name;
}

Player::~Player(){

}

void Player::obtain_card(Card card){
    hand.push_back(card);

}

void Player::reset_hand(){
    hand = {};

}

// GETTER && SETTER //
std::string Player::get_name(){
    return name;

}

std::vector<Card> Player::get_hand(){
    return hand;

}

void Player::set_name(std::string new_name){
    name = new_name;

}

void Player::set_hand(std::vector<Card> new_hand){
    hand = new_hand;

}