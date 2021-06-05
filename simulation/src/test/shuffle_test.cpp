#include <iostream>

#include <card.hpp>
#include <deck.hpp>
#include <deckfactory.hpp>
#include <ctime>

#include "test.hpp"

void test::shuffle_efficiency_test(){
    /* 
    This is bias tester.
    We'll test with a set of cards {1, 2, 3}
    and get some insight from it.

    Result:
    123: 1664795
    132: 1666813
    213: 1666037
    231: 1666430
    312: 1666974
    321: 1668951
    
    Seems OK
    */ 
    long round = 10000000;
    std::string sequences[] = {"123", "132", "213", "231", "312", "321"};
    int counts[6] = {0};
    for (long i=0; i<round; i++){
        Deck deck;
        Card card1("1", "T"), card2("2", "T"), card3("3", "T");
        deck.add_card_on_top(card1);
        deck.add_card_on_top(card2);
        deck.add_card_on_top(card3);
        deck.shuffle();
        std::string result = "";
        int n = deck.get_size();
        for (int i=0; i<n; i++){
            result += deck.pick_card().get_rank();
        }
        for (int i=0; i<6; i++){
            if (result == sequences[i]){
                counts[i]++;
                break;

            }
        }
        
    }
    std::cout << "Shuffle " << round << " Round\n" << "Test Result:\n";
    for (int i=0; i<6; i++){
        std::cout << sequences[i] << ": " << counts[i] << "\n";

    }

}

void test::cut_test(){

}

void test::riffle_test(){

}