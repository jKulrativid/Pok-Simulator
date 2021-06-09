add_library(
    simulator
    simulator.hpp
    simulator.cpp
)

target_include_directories(simulator PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")

target_link_libraries(simulator PRIVATE deckfactory)
target_link_libraries(simulator PRIVATE player)
