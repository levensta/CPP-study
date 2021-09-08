//
// Created by Lorent Evenstar on 8/18/21.
//

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {};

Ice::~Ice() {};

Ice::Ice(const Ice &copy) : AMateria("ice") {
	*this = copy;
}

Ice &Ice::operator=(const Ice &copy) {
	if (this != &copy) {
		this->type = copy.type;
	}
	return *this;
}

Ice *Ice::clone() const {
	return new Ice();
}

void Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" <<std::endl;
}