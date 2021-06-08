#ifndef DECKFACTORY_HPP
#define DECKFACTORY_HPP

#include <vector>
#include <deck.hpp>

class DeckFactory{
    public:
        DeckFactory();
        ~DeckFactory();
        Deck* get_new_deck(int stack_amount);

};

#endif