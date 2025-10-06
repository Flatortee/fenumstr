#include <iostream>
#include "fenumstr.h"

enum class Color { Red, Green, Blue };

int main()
{
	std::cout << fenumstr::EnumToString<Color::Red>()	<< std::endl;
	std::cout << fenumstr::EnumToString<Color::Green>() << std::endl;
	std::cout << fenumstr::EnumToString<Color::Blue>()	<< std::endl;
	return 0;
}