#include <iostream>
#include <vector>
#include <ctime>

#include <deck.hpp>
#include <player.hpp>
#include <deckfactory.hpp>

// Put Test HERE !!!!
void runtest(){
    std::cout << "<<<<<<<<<<<<<<< RUN TEST >>>>>>>>>>>>>>>\n";
    DeckFactory* df = new DeckFactory();
    Deck* deck = df->get_new_deck(1);
    Dealer* dealer = new Dealer("Mr.Wang");
    Player* player = new Player("Richard");
    dealer->set_deck(deck);
    dealer->formal_shuffle();
    Card* testcard1;
    Card* testcard2;
    dealer->hand_out_card(player, 1);
    dealer->hand_out_card(player, 1);
    std::cout << player->get_score();

}

void init_program(){
    std::srand(std::time(NULL));

}

int main(){
    init_program();
    std::cout << "main Work\n";
    for (int i=0; i<5; i++)
        runtest();

}