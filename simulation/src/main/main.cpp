#include <iostream>
#include <ctime>

#include <biastest.hpp>

void init_seed_rand(){
    std::srand(std::time(NULL));

}

void generate_data_folder(){
    
}

void init_program(){
    init_seed_rand();
    generate_data_folder();

}

int main(){
    init_program();
    long round = 100;
    biastest::shuffle_bias_test(round);

}