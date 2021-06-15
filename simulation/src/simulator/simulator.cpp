#include <iostream>
#include <vector>
#include <map>
#include <string>

#include <player.hpp>
#include <deckfactory.hpp>

#include "simulator.hpp"
#include "config.hpp"

void setup_player(std::vector<Player*>& seat){
    int player_amount = config::player_amount;
    for (int i=1; i<=player_amount; i++){
        std::string player_number = std::to_string(i);
        Player* new_player = new Player("Player" + player_number); 
    }
    return ;

}

void simulate_one_game(){
    Dealer* dealer = new Dealer("Dealer");
    std::vector<Player*> seat = {};
    setup_player(seat);

}

void simulate(const long& round, const int& player_amount){
    
}

void simulator::simulate_without_money(const long& round, const int& player_amount){
    simulate_money = false;
    for (long i=0; i<round; i++){
        simulate_one_game();

    }
}

void simulator::simulate_with_money(const long& round, const int& player_amount){
    simulate_money = true;
    for (long i=0; i<round; i++)
    // TODO
}