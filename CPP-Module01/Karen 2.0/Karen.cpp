//
// Created by Lorent Evenstar on 8/11/21.
//

#include "Karen.hpp"

Karen::Karen() {
	arrayLevels[0] = "debug";
	arrayLevels[1] = "info";
	arrayLevels[2] = "warning";
	arrayLevels[3] = "error";

	arrayMethods[0] = &Karen::debug;
	arrayMethods[1] = &Karen::info;
	arrayMethods[2] = &Karen::warning;
	arrayMethods[3] = &Karen::error;
}

Karen::~Karen() {}

void Karen::debug() {
	std::cout << "I love to get extra bacon for my special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info() {
	std::cout << "I cannot believe adding extrabacon cost more mone." << std::endl;
}

void Karen::warning() {
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
}

void Karen::error() {
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::complain(std::string level) {
	for (int i = 0; i < 4; ++i) {
		if (arrayLevels[i] == level) {
			(this->*Karen::arrayMethods[i])();
		}
	}
}