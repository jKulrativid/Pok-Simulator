# MAIN
add_executable(pok-simulator main.cpp)

target_link_libraries(pok-simulator PRIVATE base)
target_link_libraries(pok-simulator PRIVATE deckfactory)

# TESTMAIN
add_executable(testmain testmain.cpp)

target_link_libraries(testmain PRIVATE test)