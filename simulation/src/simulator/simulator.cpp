#include <iostream>
#include <vector>
#include <map>
#include <string>

#include <player.hpp>
#include <deckfactory.hpp>

#include "simulator.hpp"

void add_player_to_seat(std::vector<Player*>* player_seat, int size){
	for (int i=0; i<size; i++){
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

void simulate_one_game(){
}

void simulator::run(long round, int player_amount){
	std::vector<Player*> player_seat = {};
	Dealer* dealer = new Dealer("Dealer");
	add_player_to_seat(&player_seat, player_amount);
	for (long round_count=0; round_count<round; round_count++){
		simulate_one_game();

	}
	return ;
    
}