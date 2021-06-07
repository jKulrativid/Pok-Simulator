#ifndef RANK_HPP
#define RANK_HPP

#include <iostream>
#include <unordered_map>

const std::string ranks[] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};
const std::unordered_map<std::string, int> rank_values = {
    {"2", 2}, {"3", 3}, {"4", 4}, {"5", 5}, {"6", 6}, {"7", 7}, {"8", 8}, 
    {"9", 9}, {"10", 10}, {"J", 10}, {"Q", 10}, {"K", 10}, {"A", 1}
};

#endif