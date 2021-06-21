#include "finance.hpp"

Balance::Balance(){
	balance_list = {};

}

void Balance::register_player(Player* player){
	std::string player_name = player->get_name();
	balance_list[player_name];
	return ;

}

void Balance::remove_player(Player* player){
	std::string player_name = player->get_name();
	balance_list.erase(player_name);
	return ;

}

void Balance::deposit(Player* player, long amount){
	std::string player_name = player->get_name();
	balance_list[player_name] += amount;
	return ;

}

void Balance::withdraw(Player* player, long amount){
	std::string player_name = player->get_name();
	balance_list[player_name] -= amount;
	return ;
	
}