#ifndef RESULT_HPP
#define RESULT_HPP

#include <iostream>
#include <map>

#include <player.hpp>

namespace result{
	std::map<std::string, std::map<std::string, long>> recorder = {};
	void add_player(Player* player);
	void remove_player(Player* player);
	void reset_player_record(Player* player);
	void update_result(Player* player, std::string incedent, long amount);

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