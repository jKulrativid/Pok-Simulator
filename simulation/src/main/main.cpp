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
    long round = 1;
    int player_amount = 3;
    simulator::simulate();
    
}