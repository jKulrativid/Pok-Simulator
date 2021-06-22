#include <iostream>
#include <map>
#include <string>

#include <deckfactory.hpp>

#include "simulator.hpp"
#include "config.hpp"
#include "strategy.hpp"
#include "result.hpp"

Dealer* dealer;
std::vector<Player*> seat = {};
std::vector<Player*> continue_seat = {};

int get_stack_amount(){
	const int player_amount = config::get_player_amount();
	int stack_amount = ((3*(player_amount + 1)) / 52) + 1;
	return stack_amount;

}

void setup_players(){
    int player_amount = config::get_player_amount();
    for (int i=1; i<=player_amount; i++){
        std::string player_number = std::to_string(i);
        Player* new_player = new Player("Player" + player_number);
        compete_result::add_player(new_player);
        seat.push_back(new_player);
        
    }
    return ;

}

void setup_dealer_deck(){
    DeckFactory* df = new DeckFactory();
    int stack_amount = get_stack_amount();
    Deck* dealer_deck = df->get_new_deck(stack_amount);
    dealer->set_deck(dealer_deck);
    dealer->formal_shuffle();
    return ;
     
}

void setup_dealer(){
    dealer = new Dealer("Dealer");
    compete_result::add_player(dealer);
    return ;

}

void all_player_first_pick(){
    const int card_amount = config::FIRST_PICK_AMOUNT;
    for (Player* player: seat){
        dealer->hand_out_card(player, card_amount);
    }
    dealer->hand_out_card(dealer, card_amount);
    return ;

}

void player_to_continue_seat(Player* player){
    continue_seat.push_back(player);
    return ;

}

void play_round_one(){
    int player_score;
    int dealer_score = dealer->get_score();
    const int pok = config::POK;
    bool dealer_pok = dealer_score >= pok ? true: false;
    bool player_pok;
    for (Player* player: seat){
        player_score = player->get_score();
        player_pok = player_score >= pok ? true: false;
        if (player_pok && dealer_pok){
            if (player_score > dealer_score){
                compete_result::update_result(player, "win", 1);
                compete_result::update_result(dealer, "lose", 1);
            }
            else if (dealer_score > player_score){
                compete_result::update_result(dealer, "win", 1);
                compete_result::update_result(player, "lose", 1);
            } else {
                compete_result::update_result(player, "draw", 1);
                compete_result::update_result(dealer, "draw", 1);
            }
        }
        else if (player_pok){
            compete_result::update_result(player, "win", 1);
            compete_result::update_result(dealer, "lose", 1);
        } 
        else if (dealer_pok){
            compete_result::update_result(dealer, "win", 1);
            compete_result::update_result(player, "lose", 1);
        } 
        else{
            player_to_continue_seat(player);

        }
        
    }
    return ;

}

void all_player_second_pick(){
    const int card_amount = config::SECOND_PICK_AMOUNT;
    const int pok = config::POK;
    bool dealer_pok = dealer->get_score() >= pok ? true: false;
    if (dealer_pok){
        return ;

    }
    int dealer_score = dealer->get_score();
    int player_score;
    for (Player* player: continue_seat){
        player_score = player->get_score();
        if (strategy::recommend_to_pick(player_score, dealer_score)){
            dealer->hand_out_card(player, card_amount);

        }
    }
    if (strategy::recommend_to_pick(dealer_score, dealer_score)){
        dealer->hand_out_card(dealer, card_amount);

    }
    return ;

}

void play_round_two(){
    const int pok = config::POK;
    bool dealer_pok = dealer->get_score() >= pok ? true: false;
    if (dealer_pok){
        return ;
       
    }
    int dealer_score, player_score;
    dealer_score = dealer->get_score();
    for (Player* player: continue_seat){
        player_score = player->get_score();
        if (player_score > dealer_score){
            compete_result::update_result(player, "win", 1);
            compete_result::update_result(dealer, "lose", 1);
        }
        else if (dealer_score > player_score){
            compete_result::update_result(dealer, "win", 1);
            compete_result::update_result(player, "lose", 1);
        }
        else {
            compete_result::update_result(dealer, "draw", 1);
            compete_result::update_result(player, "draw", 1);
        }
    }
    return ;

}

void clean_dealer_hand(){
    dealer->reset_hand();
    return ;

}

void clean_all_player_hand(){
    for (Player* player: seat){
        player->reset_hand();

    }
    return ;

}

void reset_continue_seat(){
    continue_seat.clear();
    return ;

}

void before_game(){
    setup_dealer_deck();
    clean_dealer_hand();
    clean_all_player_hand();
    reset_continue_seat();
    return ;

}

void show_card(){
    printf("%s's score: %d\n", dealer->get_name().c_str(), dealer->get_score());
    for (Player* player: seat){
        printf("%s's score: %d\n", player->get_name().c_str(), player->get_score());
    }
    return ;

}
void simulate_one_game(){
    before_game();
    all_player_first_pick();
    play_round_one();
    all_player_second_pick();
    play_round_two();
    return ;
    
}

void simulator::simulate(){
    long round = config::get_round();
    setup_players();
    setup_dealer();
    for (long i=0; i<round; i++){
        simulate_one_game();
    }
    compete_result::show_result();
    return ;
    
}