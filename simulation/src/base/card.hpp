#ifndef CARD_HPP
#define CARD_HPP

#include<iostream>

class Card{
    private:
        std::string rank;
        std::string suit;
    public:
        Card(std::string r, std::string s);
        ~Card();
        std::string get_rank();
        std::string get_suit();
};

#endif