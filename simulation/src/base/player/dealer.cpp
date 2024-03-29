#include "player.hpp"  // dealer declaration is in player.hpp

Dealer::Dealer(): Player(){

}

Dealer::Dealer(std::string new_name): Player(new_name){
    
}

void Dealer::formal_shuffle(){
    shuffler::shuffle(&deck);
    shuffler::riffle(&deck);
    shuffler::cut(&deck);
    
}

void Dealer::hand_out_card(Player* other_player, int amount){
    for (int i=0; i<amount; i++){
        if (deck.get_deck_size() > 0){
            Card* card = deck.pick_card();
            other_player->obtain_card(card);

        }
    }

}

// GETTER && SETTER //
Deck* Dealer::get_deck(){
    return &deck;

}

void Dealer::set_deck(Deck* new_deck){
    deck = *new_deck;

}