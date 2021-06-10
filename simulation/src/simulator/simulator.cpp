#include <iostream>
#include <vector>
#include <map>
#include <string>

#include <player.hpp>
#include <deckfactory.hpp>

#include "simulator.hpp"

void assign_player_to_tracker(Dealer* dealer, std::vector<Player*>* player_seat, std::map<std::string, long>* tracker){
    (*tracker)[dealer->get_name()] = 0;
    for (Player* player: *player_seat){
        (*tracker)[player->get_name()] = 0;
}
    return ;

}

void add_player_to_seat(std::vector<Player*>* player_seat, int size){
    for (int i=1; i<=size; i++){
        Player* new_player = new Player("Player " + std::to_string(i));
        player_seat->push_back(new_player);

    }
    return ;

}

void reset_dealer_deck(Dealer* dealer, int new_deck_stack){
    DeckFactory df;
    dealer->set_deck(df.get_new_deck(new_deck_stack));
    return ;

}

void simulate_one_game(Dealer* dealer, std::vector<Player*>* player_seat, std::map<std::string, long>* tracker){
    int proper_deck_size = ((3*(player_seat->size() + 1)) / 52) + 1;
    reset_dealer_deck(dealer, proper_deck_size);
    for (Player* player: *player_seat){
        dealer->hand_out_card(player, 2);

    }
    int dealer_score = dealer->get_score();
    int player_score;
    std::vector<Player*> continue_seat = {};
    for (Player* player: *player_seat){
        player_score = player->get_score();
        if (dealer_score > player_score){
            (*tracker)[dealer->get_name()] += 1;
            
        } else if (dealer_score < player_score){
            (*tracker)[player->get_name()] += 1;

        }  // else draw
        
        if (player_score < 8){
            continue_seat.push_back(player);

        }

    }
    if (dealer_score < 8){
        for (Player* player: *player_seat){
            if (player->get_score() < 6){
                dealer->hand_out_card(player, 1);

            }
        }
        dealer_score = dealer->get_score();
        for (Player* player: *player_seat){
            player_score = player->get_score();
            if (dealer_score > player_score){
                (*tracker)[dealer->get_name()] += 1;

            } else if (dealer_score < player_score){
                (*tracker)[player->get_name()] += 1;

            }
        }
    }
    for (Player* player: *player_seat){
        player->reset_hand();

    }
    return ;
    
}

void show_result(std::map<std::string, long>* tracker){
    for (auto itr=tracker->begin(); itr!=tracker->end(); itr++){
        std::cout << itr->first << ": " << itr->second << "\n";

    }
    return ;

}

void simulator::run(long round, int player_amount){
    std::vector<Player*> player_seat = {};
    Dealer* dealer = new Dealer("Dealer");
    player_seat.push_back(dealer);
    add_player_to_seat(&player_seat, player_amount);
    std::map<std::string, long> tracker;
    assign_player_to_tracker(dealer, &player_seat, &tracker);
    for (long round_count=0; round_count<round; round_count++){
        simulate_one_game(dealer, &player_seat, &tracker);

    }
    show_result(&tracker);
    return ;
    
}