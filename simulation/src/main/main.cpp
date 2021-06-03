#include <iostream>

#include <card.hpp>

int main(){
    Card card('J', 'S');
    std::cout << card.get_rank() << std::endl;
    std::cout << card.get_suit() << std::endl;

}