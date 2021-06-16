#ifndef SIMULATOR_HPP
#define SIMULATOR_HPP

#include <vector>

#include <player.hpp>

namespace simulator{
    Dealer* dealer;
    std::vector<Player*> seat;
    void simulate();
    
}

#endif