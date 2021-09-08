//
// Created by Lorent Evenstar on 8/10/21.
//

#include "Weapon.hpp"

Weapon::Weapon() : type("") {};
Weapon::Weapon(std::string type) : type(type) {};
Weapon::~Weapon() {};

Weapon & Weapon::operator=(const Weapon &copy) {
	if (this != &copy) {
		this->type = copy.type;
	}
	return *this;
}

const std::string & Weapon::getType() {
	return this->type;
}

void Weapon::setType(std::string type) {
	this->type = type;
}
