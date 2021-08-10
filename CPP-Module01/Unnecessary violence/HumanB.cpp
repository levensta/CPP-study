//
// Created by Lorent Evenstar on 8/10/21.
//

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL) {}
HumanB::~HumanB() {};

void HumanB::attack() {
	std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {
	this->weapon = &weapon;
}

