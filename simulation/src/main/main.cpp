#include <iostream>
#include <ctime>
#include <fileapi.h>
#include <filesystem>

void init_seed_rand(){
    std::srand(std::time(NULL));

}

void init_program(){
    init_seed_rand();

}

int main(){
    init_program();

}