#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <iostream>
#include <vector>

#include "card.hpp"

class Player{
    private:
        std::string name;
        std::vector<Card> hand;
    
    public:
        Player();
        Player(std::string new_name);
        ~Player();
        void obtain_card(Card card);

        // GETTER && SETTER //
        std::string get_name();
        std::vector<Card> get_hand();
        void set_name(std::string new_name);

};

#endif