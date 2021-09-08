//
// Created by Lorent Evenstar on 8/17/21.
//

#include "Cat.hpp"

Cat::Cat() : Animal() {
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << this->type << " was created" << std::endl;
};

Cat::~Cat() {
	delete this->brain;
	std::cout << this->type << " was deleted" << std::endl;
};

Cat::Cat(Cat &copy) {
	*this = copy;
	std::cout << this->type << " has been copied" << std::endl;
}

Cat &Cat::operator=(const Cat &copy) {
	if (this != &copy) {
		this->type = copy.type;
		this->brain = copy.brain;
	}
	std::cout << "Assignment overload" << std::endl;
	return *this;
}

std::string Cat::getType(void) const {
	return this->type;
}

void Cat::makeSound(void) const {
	std::cout << "Meow" << std::endl;
}