#include "config.hpp"

long simulate_round = 1;
int player_amount = 1;

long config::get_round(){
	return simulate_round;

}

int config::get_player_amount(){
	return player_amount;

}

void config::set_round(long new_round){
	simulate_round = new_round;

}

void config::set_player_amount(int new_player_amount){
	player_amount = new_player_amount;

}