#ifndef RESULT_HPP
#define RESULT_HPP

#include <iostream>
#include <map>

namespace result{
	std::map<std::string, std::map<std::string, long>> recorder = {};

}
/*  RECORDER MAP STRUCTURE
	{
		"Player Name": {
			"Win": 100,
			"Draw": 20,
			"Lose": 102
		}
	}
*/

#endif