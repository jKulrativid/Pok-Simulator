#include <iostream>
#include <ctime>
#include <fileapi.h>
#include <filesystem>

#include <simulator.hpp>

void init_seed_rand(){
    std::srand(std::time(NULL));

}

void init_program(){
    init_seed_rand();

}

int main(){
    init_program();
    long round;
    int player_amount;
    std::cout << "Round: ";
    std::cin >> round;
    std::cout << "Player Amount: ";
    std::cin >> player_amount;
    simulator::run(round, player_amount);
    
}