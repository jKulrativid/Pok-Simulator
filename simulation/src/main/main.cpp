#include <iostream>
#include <ctime>

// Put Test HERE !!!!
void runtest(){
    std::cout << "<<<<<<<<<<<<<<< RUN TEST >>>>>>>>>>>>>>>\n";
}

void init_program(){
    std::srand(std::time(NULL));

}

int main(){
    init_program();
    std::cout << "main Work\n";
    runtest();

}