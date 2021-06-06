#include "player.hpp"
#include "ref.hpp"

Player::Player(){
    name = "Anonymous";
    hand = {};
    
}

Player::Player(std::string new_name){
    name = new_name;
    hand = {};

}

Player::~Player(){

}

void Player::obtain_card(Card card){
    hand.push_back(card);

}

int Player::get_card_value(){
    int total = 0;
    for (Card card: hand){
        std::string rank = card.get_rank();
        total += rank_value.at(rank);
        
    }
    return total % 10;

}

void Player::reset_hand(){
    hand.clear();

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