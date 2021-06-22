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
	void reset();
	void show_result();

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

// TODO write card history in sql
// suspended
namespace card_history{
	void add_player(Player* player);
	void remove_player(Player* player);
	void update_player_history(Player* player);
	void reset();
	void show_result();

}
/*  std::vector< std::vector< std::string > > 
	player / round |      1      |      2     |
	player 1       | KS, 5S, 10D | QH, JS, -- |
	player 2       | 3S, 6D, 7C  | 4S, 3C, KS |
*/

#endif