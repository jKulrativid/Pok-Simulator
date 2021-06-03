#ifndef DECK_HPP
#define DECK_HPP

#include "card.hpp"
#include <vector>

class Deck{
    private:
        std::vector<Card> card_list;
        int size;
    
    public:
        Deck();
        ~Deck();
        Card pick_card();
        void add_card_on_top(Card card);
        std::vector<Card> get_card_list();

};

#endif