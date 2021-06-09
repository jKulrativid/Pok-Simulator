#include <iostream>
#include <ctime>

#include <biastest.hpp>

void init_seed_rand(){
    std::srand(std::time(NULL));

}

void init_program(){
    init_seed_rand();

}

int main(){
    init_program();
    long round = 10000000;
    biastest::shuffle_bias_test(round);

}