#include "result.hpp"
	
std::map<std::string, std::map<std::string, long>> recorder = {};

std::map<std::string, long> get_new_individual_recorder(){
	std::map<std::string, long> new_individual_recorder = {};
	new_individual_recorder["win"] = 0;
	new_individual_recorder["draw"] = 0;
	new_individual_recorder["lose"] = 0;
	return new_individual_recorder;

}

void compete_result::add_player(Player* player){
	std::string player_name = player->get_name();
	recorder[player_name];
	return ;

}

void compete_result::remove_player(Player* player){
	std::string player_name = player->get_name();
	recorder.erase(player_name);
	return ;
	
}

void compete_result::reset_player_record(Player* player){
	std::string player_name = player->get_name();
	recorder[player_name] = get_new_individual_recorder();
	return ;

}

void compete_result::update_result(Player* player, std::string incident, long amount){
	std::string player_name = player->get_name();
	recorder[player_name][incident] += amount;
	return ;

}

void compete_result::reset(){
	recorder = {};
	return ;

}

void compete_result::show_result(){
	std::map<std::string, std::map<std::string, long>>::iterator itr;
	for (itr=recorder.begin(); itr!= recorder.end(); itr++){
		printf("%s -> win: %ld | draw: %ld | lose: %ld\n", itr->first.c_str(), itr->second["win"], itr->second["draw"], itr->second["lose"]);
	}
	return ;

}