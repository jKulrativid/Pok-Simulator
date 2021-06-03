add_library(
    base
    card.hpp
    card.cpp
)

target_include_directories(base PUBLIC "${CMAKE_CURRENT_SOUR_DIR}")
