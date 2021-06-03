#include <iostream>

#include <card.hpp>
#include <deck.hpp>

int main(){
    Card *card = new Card('J', 'S');
    Deck *deck = new Deck();
    deck->add_card_on_top(*card);
    std::cout << card->get_rank() << std::endl;
    std::cout << card->get_suit() << std::endl;
    std::cout << deck->pick_card().get_rank() << std::endl;

}