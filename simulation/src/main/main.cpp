#include <iostream>
#include <vector>
#include <ctime>
#include <unordered_map>

#include <deck.hpp>
#include <player.hpp>
#include <deckfactory.hpp>

void init_seed_rand(){
    std::srand(std::time(NULL));

}

void init_program(){
    init_seed_rand();

}

int main(){
    init_program();

}