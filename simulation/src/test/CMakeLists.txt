add_library(
    test
    test.hpp
    shuffle_test.cpp
    basetest.cpp
)

target_link_libraries(test PRIVATE base)
target_link_libraries(test PRIVATE deckfactory)
target_include_directories(test PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")