add_library(
    deckfactory
    deckfactory.hpp
    deckfactory.cpp
)

target_link_libraries(deckfactory PRIVATE reference)
target_link_libraries(deckfactory PRIVATE card)
target_link_libraries(deckfactory PRIVATE deck)
target_include_directories(deckfactory PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")
