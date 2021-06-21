#include <iostream>

#include "config.hpp"

long simulate_round = 1;
int player_amount = 1;
bool simulate_with_money = false;

void config::show_setup(){
	printf("############ CONFIG #############\n");
	printf("Round: %ld\n", simulate_round);
	printf("Player Amount: %d\n", player_amount);
	printf("Simulate With Money: %s\n", simulate_with_money ? "True": "False");
}

long config::get_round(){
	return simulate_round;

}

int config::get_player_amount(){
	return player_amount;

}

bool config::get_simulate_with_money(){
	return simulate_with_money;

}

void config::set_round(long new_round){
	simulate_round = new_round;

}

void config::set_player_amount(int new_player_amount){
	player_amount = new_player_amount;

}

void config::set_simulate_with_money(bool new_status){
	simulate_with_money = new_status;

}