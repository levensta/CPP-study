//
// Created by Lorent Evenstar on 8/10/21.
//

#include "Zombie.hpp"

Zombie::Zombie() : _name("levensta") {}

Zombie::~Zombie() {
	std::cout << this->_name << " is deeeeaaaad" << std::endl;
}

void Zombie::announce() {
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name) {
	this->_name = name;
}