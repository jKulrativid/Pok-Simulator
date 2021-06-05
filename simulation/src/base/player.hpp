#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <iostream>
#include <vector>

#include "card.hpp"
#include "deck.hpp"

class Player{
    private:
        std::string name;
        std::vector<Card> hand;
    
    public:
        Player();
        Player(std::string new_name);
        ~Player();
        void obtain_card(Card card);
        void reset_hand();

        // GETTER && SETTER //
        std::string get_name();
        std::vector<Card> get_hand();
        void set_name(std::string new_name);
        void set_hand(std::vector<Card> new_hand);

};

class Dealer: public Player{
    private:
        Deck deck;
    
    public:
        Dealer();
        Dealer(std::string new_name);
        void give_card_to_player(Player other_player);
        
        // GETTER && SETTER //
        Deck get_deck();
        void set_deck(Deck new_deck);

};

#endif