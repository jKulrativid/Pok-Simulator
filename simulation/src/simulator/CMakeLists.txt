add_library(
    simulator
    simulator.hpp
    simulator.cpp
    config.hpp
    logic.hpp
    locig.cpp
    result.hpp
    result.cpp
)

target_include_directories(simulator PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")

target_link_libraries(simulator PRIVATE card)
target_link_libraries(simulator PRIVATE deck)
target_link_libraries(simulator PRIVATE deckfactory)
target_link_libraries(simulator PRIVATE player)
