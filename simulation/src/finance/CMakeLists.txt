add_library(
	finance
	finance.hpp
	finance.cpp
)

target_include_directories(finance PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")

target_link_libraries(finance PRIVATE card)
target_link_libraries(finance PRIVATE deck)
target_link_libraries(finance PRIVATE player)