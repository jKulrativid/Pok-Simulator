#include <iostream>
#include <ctime>
#include <fileapi.h>
#include <filesystem>

#include <simulator.hpp>
#include <config.hpp>

void init_seed_rand(){
    std::srand(std::time(NULL));

}

void init_program(){
    init_seed_rand();

}

void set_round(){
    long round;
    printf("Round: ");
    scanf(" %ld", &round);
    config::set_round(round);
    return ;
    
}

void set_player_amount(){
    int player_amount;
    printf("Player Amount: ");
    scanf(" %d", &player_amount);
    config::set_player_amount(player_amount);
    return ;

}

void set_money_system(){
    bool enable_money;
    char input;
    printf("Enable Money System? (y/n): ");
    scanf(" %c", &input);
    if (input == 'y'){
        enable_money = true;
    }
    else {
        enable_money = false;
    }
    config::set_simulate_with_money(enable_money);
    return ;

}

void setup(){
    set_round();
    set_player_amount();
    set_money_system();
}

int main(){
    init_program();
    setup();
    config::show_setup();
    simulator::simulate();
    
}