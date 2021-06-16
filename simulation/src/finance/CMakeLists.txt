add_library(
	finance
	finance.hpp
	finance.cpp
)

target_include_directories(finance PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")
