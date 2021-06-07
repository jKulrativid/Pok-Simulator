#ifndef CARD_HPP
#define CARD_HPP

#include<iostream>

class Card{
    private:
        std::string rank;
        std::string suit;
        int value;
        
    public:
        Card(std::string r, std::string s);
        ~Card();
        std::string get_rank();
        std::string get_suit();
        int get_value();
};

namespace value_calculator{
    int value_of_card(Card* card);

}

#endif