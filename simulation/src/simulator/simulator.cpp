#include <iostream>
#include <vector>
#include <map>
#include <string>

#include <player.hpp>
#include <deckfactory.hpp>

#include "simulator.hpp"
#include "config.hpp"
#include "logic.hpp"

void setup_players(std::vector<Player*>& seat){
    int player_amount = config::player_amount;
    for (int i=1; i<=player_amount; i++){
        std::string player_number = std::to_string(i);
        Player* new_player = new Player("Player" + player_number); 
    }
    return ;

}

void setup_dealer_deck(Dealer* dealer){
    DeckFactory* df = new DeckFactory();
    int stack_amount = logic::get_stack_amount();
    Deck* dealer_deck = df->get_new_deck(stack_amount);
    dealer->set_deck(dealer_deck);
    return ;
     
}

void setup_dealer(Dealer* dealer){
    setup_dealer_deck(dealer);
    return ;

}

void all_player_first_pick(Dealer* dealer, std::vector<Player*> seat){
    const int card_amount = config::first_pick_amount;
    dealer->hand_out_card(dealer, card_amount);
    for (Player* player: seat){
        dealer->hand_out_card(player, card_amount);
    }
    return ;

}

void play_round_one(Dealer* dealer, std::vector<Player*>& seat){
    int player_score;
    int dealer_score = dealer->get_score();
    for (Player* player: seat){
        player_score = player->get_score();
        if (dealer_score > player_score){
            // TODO dealer win
        } else if (dealer_score < player_score) {
            // TODO player win
        } else {
            // TODO draw
        }
        // TODO


    }
    return ;

}

void simulate_one_game(){
    Dealer* dealer = new Dealer("Dealer");
    std::vector<Player*> seat = {};
    setup_dealer(dealer);
    setup_players(seat);
    all_player_first_pick(dealer, seat);
    play_round_one(dealer, seat);
    
}

void simulator::simulate(){
    long round = config::round;
    for (long i=0; i<round; i++){
        simulate_one_game();
    }
    return ;
    
}