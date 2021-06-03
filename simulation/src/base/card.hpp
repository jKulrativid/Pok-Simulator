#ifndef CARD_HPP
#define CARD_HPP

class Card{
    private:
        char rank;
        char suit;
    public:
        Card(char r, char s);
        char get_rank(void);
        char get_suit(void);
};

#endif