//
// Created by Lorent Evenstar on 8/17/21.
//

#include "Dog.hpp"

Dog::Dog() : Animal() {
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << this->type << " was created" << std::endl;
};

Dog::~Dog() {
	delete this->brain;
	std::cout << this->type << " was deleted" << std::endl;
};

Dog::Dog(Dog &copy) {
	*this = copy;
	std::cout <<
	this->type << " has been copied" << std::endl;
}

Dog &Dog::operator=(const Dog &copy) {
	if (this != &copy) {
		this->type = copy.type;
		this->brain = copy.brain;
	}
	std::cout << "Assignment overload" << std::endl;
	return *this;
}

std::string Dog::getType(void) const {
	return this->type;
}

void Dog::makeSound(void) const {
	std::cout << "Awww" << std::endl;
}