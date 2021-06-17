#ifndef CONFIG_HPP
#define CONFIG_HPP

namespace config{
	const int pok = 8;  /* see pokdeng rule */
	const int first_pick_amount = 2;
	const int second_pick_amount = 1;

	// mutable variable needed to be called by getter and setter
	long get_round();
	int get_player_amount();
	void set_round(long new_round);
	void set_player_amount(int new_player_amount);

}

#endif