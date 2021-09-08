//
// Created by Lorent Evenstar on 8/17/21.
//

#include "WrongCat.hpp"

//WrongAnimal()
WrongCat::WrongCat() : WrongAnimal() {
	this->type = "WrongCat";
	std::cout << this->type << " was created" << std::endl;
};

WrongCat::~WrongCat() {
	std::cout << this->type << " was deleted" << std::endl;
};

WrongCat::WrongCat(WrongCat &copy) {
	*this = copy;
	std::cout <<
	this->type << " has been copied" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &copy) {
	if (this != &copy) {
		this->type = copy.type;
	}
	std::cout << "Assignment overload" << std::endl;
	return *this;
}
//
//std::string WrongCat::getType(void) const {
//	return this->type;
//}
//
//void WrongCat::makeSound(void) const {
//	std::cout << "Meow" << std::endl;
//}