//
// Created by Lorent Evenstar on 8/15/21.
//

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {};

ClapTrap::ClapTrap(std::string name) {
	this->name = name;
	this->health = 10;
	this->energy = 10;
	this->attackDamage = 0;
	std::cout << "ClapTrap " << this->name << " was created" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << this->name << " was deleted" << std::endl;
};

void ClapTrap::attack(const std::string &target) {
	std::cout << "ClapTrap " << this->name << " attack " << target << ", causing " << this->attackDamage << " points of damage" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	this->health -= amount;
	if (this->health < 0) {
		this->health = 0;
	}
	std::cout << "ClapTrap " << this->name << " take " << amount << " damage. He has " << this->health << " hp left" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	this->health += amount;
	std::cout << "ClapTrap " << this->name << " recovered " << amount << " health." << " He has " << this->health << " hp left"<< std::endl;
}