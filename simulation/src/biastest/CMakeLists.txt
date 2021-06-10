add_library(
    biastest
    biastest.hpp
    biastest.cpp
)

target_include_directories(biastest PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")

target_link_libraries(biastest PRIVATE json)
target_link_libraries(biastest PRIVATE card)
target_link_libraries(biastest PRIVATE deck)
target_link_libraries(biastest PRIVATE deckfactory)
