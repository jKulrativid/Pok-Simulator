#include "logic.hpp"
#include "config.hpp"

int logic::get_stack_amount(){
	const int player_amount = config::player_amount;
	const int dealer_amount = config::dealer_amount;
	int stack_amount = (3*(player_amount + dealer_amount)) / 52;
	return stack_amount;

}