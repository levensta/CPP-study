//
// Created by Lorent Evenstar on 8/11/21.
//

#include "Karen.hpp"

int main() {
	Karen		myKaren;
	std::string	str;

	std::getline(std::cin, str);
	myKaren.complain(str);
	return 0;
}
