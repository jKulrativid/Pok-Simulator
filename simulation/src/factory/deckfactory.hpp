#ifndef DECKFACTORY_HPP
#define DECKFACTORY_HPP

#include <vector>
#include <card.hpp>

class DeckFactory{

    public:
        DeckFactory();
        std::vector<Card> get_new_card_list();

};

#endif