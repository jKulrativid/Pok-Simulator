#include <iostream>

#include <card.hpp>
#include <deck.hpp>
#include <player.hpp>
#include <deckfactory.hpp>

int main(){
    Player player("Test Player 1");
    Card test_card("J", "D");
    std::cout << player.get_name() << "\n";
    player.obtain_card(test_card);
    std::cout << player.get_hand()[0].get_suit() << "\n";

}