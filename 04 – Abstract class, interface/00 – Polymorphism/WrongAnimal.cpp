//
// Created by Lorent Evenstar on 8/17/21.
//

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	this->type = "Meta-WrongAnimal";
	std::cout << this->type << " was created" << std::endl;
};

WrongAnimal::~WrongAnimal() {
	std::cout << this->type << " was deleted" << std::endl;
};

WrongAnimal::WrongAnimal(WrongAnimal &copy) {
	*this = copy;
	std::cout << this->type << " has been copied" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy) {
	if (this != &copy) {
		this->type = copy.type;
	}
	std::cout << "Assignment overload" << std::endl;
	return *this;
}

std::string WrongAnimal::getType(void) const {
	return this->type;
}

void WrongAnimal::makeSound(void) const {
	std::cout << "<wrong> ..." << std::endl;
}