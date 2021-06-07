add_library(
    player
    player.hpp
    hand.cpp
    player.cpp
    dealer.cpp
)

target_link_libraries(player PRIVATE card)
target_link_libraries(player PRIVATE deck)
target_include_directories(player PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")