add_executable(basetest basetest.cpp)

target_link_libraries(basetest PRIVATE base)
target_link_libraries(basetest PRIVATE deckfactory)