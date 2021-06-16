#include "logic.hpp"
#include "config.hpp"

int logic::get_stack_amount(){
	const int player_amount = config::player_amount;
	const int dealer_amount = config::dealer_amount;
	int stack_amount = (3*(player_amount + dealer_amount)) / 52;
	return stack_amount;

}

bool strategy::recommend_to_pick(const int player_score, const int dealer_score){
	if (player_score < 6) {
		return true;

	}
	return false;

}