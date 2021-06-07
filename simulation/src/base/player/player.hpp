#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <iostream>
#include <vector>

#include <card.hpp>
#include <deck.hpp>

class Hand{
    private: 
        std::vector<Card> holding_cards;
        int hand_size;
    
    public:
        Hand();
        ~Hand();
        void clear();
        void add_card(Card card);
        Card pick_card();

        // GETTER && SETTER //
        std::vector<Card> get_holding_cards();
        int get_hand_size();
        void set_holding_cards(std::vector<Card> new_holding_cards);
    
};

class Player{
    private:
        std::string name;
        Hand hand;
    
    public:
        Player();
        Player(std::string new_name);
        ~Player();
        void obtain_card(Card card);
        int get_score();
        void reset_hand();

        // GETTER && SETTER //
        std::string get_name();
        Hand get_hand();
        void set_name(std::string new_name);
        void set_hand(Hand new_hand);

};

class Dealer: public Player{
    private:
        Deck deck;
    
    public:
        Dealer();
        Dealer(std::string new_name);
        void formal_shuffle();
        void hand_out_card(Player* other_player, int amount);
        int count_score(Player* player);
        
        // GETTER && SETTER //
        Deck get_deck();
        void set_deck(Deck new_deck);

};

#endif