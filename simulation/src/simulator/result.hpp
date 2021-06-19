#ifndef RESULT_HPP
#define RESULT_HPP

#include <iostream>
#include <map>

#include <player.hpp>

namespace compete_result{
	void add_player(Player* player);
	void remove_player(Player* player);
	void reset_player_record(Player* player);
	void update_result(Player* player, std::string incedent, long amount);
	void show_result();

}

namespace card_history{
	void add_player(Player* player);
	void remove_player(Player* player);
}
/*  RECORDER MAP STRUCTURE
	{
		"Player Name": {
			"Win": 100,
			"Draw": 20,
			"Lose": 102
		}
	}
*/

#endif