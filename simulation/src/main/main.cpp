#include <iostream>
#include <ctime>
#include <test.hpp>

void runtest(){
    std::cout << ">>>>>>>>>>>>>> RUN TEST >>>>>>>>>>>>>>>\n";
    test::base_test();

}

int main(){
    std::srand(std::time(NULL));
    std::cout << "main Work\n";
    runtest();

}