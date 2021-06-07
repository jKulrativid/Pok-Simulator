add_library(
    reference
    rank.hpp
    rank.cpp
    suit.hpp
)

target_include_directories(reference PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")