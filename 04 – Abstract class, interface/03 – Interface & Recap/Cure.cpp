//
// Created by Lorent Evenstar on 8/18/21.
//

#include "Cure.hpp"
// #include "ICharacter.hpp"

Cure::Cure() : AMateria("cure") {};

Cure::~Cure() {};

Cure::Cure(const Cure &copy) : AMateria("cure") {
	*this = copy;
}

Cure &Cure::operator=(const Cure &copy) {
	if (this != &copy) {
		this->type = copy.type;
	}
	return *this;
}

Cure *Cure::clone() const {
	return new Cure();
}

void Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << "’s wounds *" <<std::endl;
}