#include <iostream>
#include <fstream>
#include <map>
#include <iomanip>

#include <json.hpp>
#include <deck.hpp>
#include <deckfactory.hpp>

#include "biastest.hpp"

void write_map_to_json(std::map<std::string, long> count){
    std::string database_path = "data\\biastest.json";
    nlohmann::json j;
    j["shuffle_bias"] = count;
    std::ofstream out_file(database_path);
    out_file << std::setw(4) << j << "\n";
    out_file.close();
    return ;

}

void show_map(std::map<std::string, long> count){
    for (auto itr=count.begin(); itr!=count.end(); itr++){
        std::cout << itr->first << ": " << itr->second << "\n";

    }
    return ;

}

void simulate_shuffle_bias(long round){
    std::map<std::string, long> count = {
        {"JQK", 0}, {"JKQ", 0},{"QJK", 0},
        {"QKJ", 0}, {"KJQ", 0}, {"KQJ", 0}
    };
    DeckFactory* deck_factory = new DeckFactory();
    std::string pattern;
    for (long i=0; i<round; i++){
        pattern = "";
        Deck* deck = deck_factory->get_test_deck();
        shuffler::shuffle(deck);
        for (Card* card: *deck->get_card_list()){
            pattern += card->get_rank();
            
        }
        count[pattern]++;

    }
    write_map_to_json(count);
    show_map(count);
    return ;
    
}

void biastest::shuffle_bias_test(long round){
    std::cout << "<<<<<<<<<<<<<<<<< Running Shuffle Bias Test >>>>>>>>>>>>>>>>>>\n";
    std::cout << "Simulate " << round << " round\n";
    std::time_t start_time = time(NULL);
    simulate_shuffle_bias(round);
    std::time_t end_time = time(NULL);
    std::time_t elapsed_time = end_time - start_time;
    std::cout << "Elapsed Time: " << elapsed_time << " sec\n";
    
}

void simulate_formal_shuffle_bias(long round){

}

void biastest::formal_shuffle_bias_test(long round){
    std::cout << "<<<<<<<<<<<<<<<<<< Running Formal Shuffle Bias Test >>>>>>>>>>>>>>>>>>\n";
    std::cout << "Simulate " << round << " round\n";
    
}