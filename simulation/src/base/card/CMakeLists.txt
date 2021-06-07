add_library(
    card
    card.hpp
    card.cpp
    value_calculator.cpp
)

target_link_libraries(card PRIVATE reference)
target_include_directories(card PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")