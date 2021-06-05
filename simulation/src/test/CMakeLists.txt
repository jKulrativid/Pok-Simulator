add_executable(basetest basetest.cpp)

target_link_libraries(basetest PRIVATE base)
target_link_libraries(basetest PRIVATE deckfactory)

add_executable(shuffle-test-efficiency shuffle_eff_test.cpp)

target_link_libraries(shuffle-test-efficiency base)
target_link_libraries(shuffle-test-efficiency deckfactory)