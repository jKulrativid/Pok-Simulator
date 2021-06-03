#ifndef CARD_HPP
#define CARD_HPP

class Card{
    private:
        char rank;
        char suit;
    public:
        Card(char r, char s);
        ~Card();
        char get_rank();
        char get_suit();
};

#endif