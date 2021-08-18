//
// Created by Lorent Evenstar on 8/17/21.
//

#include "Animal.hpp"

Animal::Animal() {
	this->type = "Meta-Animal";
	std::cout << this->type << " was created" << std::endl;
};

Animal::~Animal() {
	std::cout << this->type << " was deleted" << std::endl;
};

Animal::Animal(Animal &copy) {
	*this = copy;
	std::cout << this->type << " has been copied" << std::endl;
}

Animal &Animal::operator=(const Animal &copy) {
	if (this != &copy) {
		this->type = copy.type;
	}
	std::cout << "Assignment overload" << std::endl;
	return *this;
}

std::string Animal::getType(void) const {
	return this->type;
}

void Animal::makeSound(void) const {
	std::cout << "..." << std::endl;
}