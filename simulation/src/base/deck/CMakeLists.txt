add_library(
    deck
    deck.hpp
    deck.cpp
    shuffler.cpp
)

target_include_directories(deck PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")

target_link_libraries(deck PRIVATE card)