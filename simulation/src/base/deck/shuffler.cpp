#include "deck.hpp"

void swap(Card* a, Card* b){
    Card temp = *a;
    *a = *b;
    *b = temp;
    return ;

}

void shuffler::shuffle(Deck* deck){
    // fisher yates algorithm
    int deck_size = deck->get_deck_size();
    std::vector<Card> card_list = deck->get_card_list();
    for (int i=deck_size-1; i>=0; --i){
        int swap_index = std::rand() % (i+1);
        swap(&card_list[i], &card_list[swap_index]);
        
    }
    return ;

}

void shuffler::cut(Deck* deck){
    int half_size = deck->get_deck_size() / 2;
    std::vector<Card> card_list = deck->get_card_list();
    int first_half = 0, second_half = half_size;
    for (int i=0; i<half_size; i++){
        swap(&card_list[first_half], &card_list[second_half]);
        first_half++;
        second_half++;
    }
    return ;
    
}

void shuffler::riffle(Deck* deck){
    int card_list_size = deck->get_deck_size();
    std::vector<Card> card_list = deck->get_card_list();
    std::vector<Card> left_stack = {}, right_stack = {};
    bool left_turn = true;
    for (int i=0; i<card_list_size; i++){
        if (left_turn){
            left_stack.push_back(card_list[i]);
            left_turn = false;

        } else {
            right_stack.push_back(card_list[i]);
            left_turn = true;
            
        }
    }

    int left_index = 0, right_index = 0;
    left_turn = true;
    for (int i=0; i<card_list_size; i++){
        if (left_turn){
            card_list[i] = left_stack[left_index];
            left_turn = false;
            left_index++;

        } else {
            card_list[i] = right_stack[right_index];
            left_turn = true;
            right_index++;

        }
    }
    return ;

}