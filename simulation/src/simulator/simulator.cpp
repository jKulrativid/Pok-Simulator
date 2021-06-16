#include <iostream>
#include <map>
#include <string>

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
    dealer = new Dealer("Dealer");
    setup_dealer_deck(dealer);
    return ;

}

void all_player_first_pick(Dealer* dealer, std::vector<Player*>& seat){
    const int card_amount = config::first_pick_amount;
    for (Player* player: seat){
        dealer->hand_out_card(player, card_amount);
    }
    dealer->hand_out_card(dealer, card_amount);
    return ;

}

void player_to_continue_seat(Player* player){
    simulator::continue_seat.push_back(player);
    return ;

}

void play_round_one(Dealer* dealer, std::vector<Player*>& seat){
    int player_score, player_excess_score;
    int dealer_score = dealer->get_score();
    bool dealer_pok = dealer_score >= 8 ? true: false;
    bool player_pok;
    for (Player* player: seat){
        player_score = player->get_score();
        player_pok = player_score >= 8 ? true: false;
        if (player_pok && dealer_pok){
            if (player_score > dealer_score){
                // player_win
            }
            else if (dealer_score > player_score){
                // dealer win
            } else {
                // draw
            }
        }
        else if (player_pok){
            // TODO player always win here
        } 
        else if (dealer_pok){
            // TODO dealer always win here
        } 
        else{
            player_to_continue_seat(player);

        }
        
    }
    return ;

}

void all_player_second_pick(Dealer* dealer, std::vector<Player*>& continue_seat){
    const int card_amount = config::second_pick_amount;
    bool dealer_pok = dealer->get_score() >= 8 ? true: false;
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

void play_round_two(Dealer* dealer, std::vector<Player*>& continue_seat){
    bool dealer_pok = dealer->get_score() >= 8 ? true: false;
    if (dealer_pok){
        return ;
       
    }
    int dealer_score, player_score;
    dealer_score = dealer->get_score();
    for (Player* player: continue_seat){
        player_score = player->get_score();
        if (player_score > dealer_score){
            // player_win
        }
        else if (dealer_score < player_score){
            // dealer win
        }
        else {
            // draw
        }
    }
    return ;

}

void clean_dealer_hand(Dealer* dealer){
    dealer->reset_hand();
    return ;

}

void clean_all_player_hand(std::vector<Player*>& seat){
    for (Player* player: seat){
        player->reset_hand();

    }
    return ;

}

void reset_continue_seat(std::vector<Player*>& continue_seat){
    continue_seat.clear();
    return ;

}

void before_game(Dealer* dealer, std::vector<Player*>& seat, std::vector<Player*>& continue_seat){
    clean_dealer_hand(dealer);
    clean_all_player_hand(seat);
    reset_continue_seat(continue_seat);
    return ;

}

void simulate_one_game(){
    before_game(simulator::dealer, simulator::seat, simulator::continue_seat);
    all_player_first_pick(simulator::dealer, simulator::seat);
    play_round_one(simulator::dealer, simulator::seat);
    all_player_second_pick(simulator::dealer, simulator::seat);
    play_round_two(simulator::dealer, simulator::continue_seat);
    return ;
    
}

void simulator::simulate(){
    long round = config::round;
    setup_players(simulator::seat);
    setup_dealer(simulator::dealer);
    for (long i=0; i<round; i++){
        simulate_one_game();
    }
    return ;
    
}