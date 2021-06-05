add_library(
    deckfactory
    deckfactory.hpp
    deckfactory.cpp
)

target_link_libraries(deckfactory PRIVATE base)
target_include_directories(deckfactory PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")
