add_executable(pok-simulator main.cpp)

target_link_libraries(pok-simulator PRIVATE card)
target_link_libraries(pok-simulator PRIVATE deck)
target_link_libraries(pok-simulator PRIVATE player)
target_link_libraries(pok-simulator PRIVATE deckfactory)