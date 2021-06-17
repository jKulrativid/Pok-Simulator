#ifndef FINANCE_HPP
#define FINANCE_HPP

#include <iostream>
#include <map>

#include <player.hpp>

class Balance{
	private:
		std::map<std::string, long> balance_list;
	
	public:
		Balance();
		void register_player(Player* player);
		void remove_player(Player* player);
		void deposit(Player* player, long amount);
		void withdraw(Player* player, long amount);

};

#endif