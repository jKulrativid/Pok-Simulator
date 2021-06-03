add_library(
    base
    card.hpp
    card.cpp
    deck.hpp
    deck.cpp
    player.hpp
    player.cpp
)

target_include_directories(base PUBLIC "${CMAKE_CURRENT_SOUR_DIR}")
