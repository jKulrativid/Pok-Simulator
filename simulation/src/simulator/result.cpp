#include "result.hpp"

std::map<std::string, long> get_new_individual_recorder(){
	std::map<std::string, long> new_individual_recorder = {};
	new_individual_recorder["win"] = 0;
	new_individual_recorder["draw"] = 0;
	new_individual_recorder["lose"] = 0;
	return new_individual_recorder;

}

void result::add_player(Player* player){
	std::string player_name = player->get_name();
	result::recorder[player_name];
	return ;

}

void result::remove_player(Player* player){
	std::string player_name = player->get_name();
	result::recorder.erase(player_name);
	return ;
	
}

void result::reset_player_record(Player* player){
	std::string player_name = player->get_name();
	result::recorder[player_name] = get_new_individual_recorder();
	return ;

}

void result::update_result(Player* player, std::string incident, long amount){
	std::string player_name = player->get_name();
	result::recorder[player_name][incident] += amount;
	return ;

}