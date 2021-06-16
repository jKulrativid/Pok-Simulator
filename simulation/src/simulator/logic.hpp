#ifndef LOGIC_HPP
#define LOGIC_HPP

namespace logic{
	int get_stack_amount();

}

namespace strategy{
	bool recommend_to_pick(const int player_score, const int dealer_score);
	
}

#endif