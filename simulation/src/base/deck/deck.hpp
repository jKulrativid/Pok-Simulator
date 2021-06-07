#ifndef DECK_HPP
#define DECK_HPP

#include <vector>

#include <card.hpp>

class Deck{
    private:
        std::vector<Card> card_list;
        int deck_size;
    
    public:
        Deck();
        ~Deck();
        Card pick_card();
        void add_card_on_top(Card card);
        
        // GETTER && SETTER //
        std::vector<Card> get_card_list();
        int get_deck_size();
        void set_card_list(std::vector<Card> new_card_list);

};

namespace shuffler{
    void shuffle(Deck* deck);
    void cut(Deck* deck);
    void riffle(Deck* deck);
    
}

#endif