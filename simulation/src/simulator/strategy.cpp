#include "strategy.hpp"

bool strategy::recommend_to_pick(const int player_score, const int dealer_score){
	if (player_score < 6) {
		return true;

	}
	return false;

}