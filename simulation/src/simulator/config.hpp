#ifndef CONFIG_HPP
#define CONFIG_HPP

namespace config{
	const int POK = 8;  /* see pokdeng rule */
	const int FIRST_PICK_AMOUNT = 2;
	const int SECOND_PICK_AMOUNT = 1;

	void show_setup(); // show in console

	// mutable variable needed to be called by getter and setter
	long get_round();
	int get_player_amount();
	bool get_simulate_with_money();
	void set_round(long new_round);
	void set_player_amount(int new_player_amount);
	void set_simulate_with_money(bool new_status);

}

#endif