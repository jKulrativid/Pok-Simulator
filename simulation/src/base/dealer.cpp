#include "player.hpp"  // dealer declaration is in player.hpp

Dealer::Dealer(): Player(){

}

Dealer::Dealer(std::string new_name): Player(new_name){
    
}

// GETTER && SETTER //
Deck Dealer::get_deck(){
    return deck;

}

void Dealer::set_deck(Deck new_deck){
    deck = deck;

}