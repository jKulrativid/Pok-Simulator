#ifndef DECK_HPP
#define DECK_HPP

#include "card.hpp"
#include <vector>

class Deck{
    private:
        std::vector<Card*> card_list;
        int size;
    
    public:
        Deck();
        ~Deck();

        Card* pick_card();
        void add_card_on_top(Card* card);
        void shuffle();
        
        // GETTER && SETTER //
        std::vector<Card*> get_card_list();
        void set_card_list(std::vector<Card*> new_card_list);
};

#endif