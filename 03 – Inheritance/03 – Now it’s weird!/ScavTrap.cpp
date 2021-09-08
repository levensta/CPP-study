//
// Created by Lorent Evenstar on 8/15/21.
//

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	this->health = 100;
	this->energy = 50;
	this->attackDamage = 20;
	std::cout << "ScavTrap " << this->name << " was created" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << this->name << " was deleted" << std::endl;
};

void ScavTrap::attack(const std::string &target) {
	std::cout << "ScavTrap " << this->name << " attack " << target << ", causing " << this->attackDamage << " points of damage" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount) {
	this->health -= amount;
	if (this->health < 0) {
		this->health = 0;
	}
	std::cout << "ScavTrap " << this->name << " take " << amount << " damage. He has " << this->health << " hp left" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount) {
	this->health += amount;
	std::cout << "ScavTrap " << this->name << " recovered " << amount << " health." << " He has " << this->health << " hp left"<< std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "🛡️ FragTrap " << this->name << " have enterred in Gate keeper mode 🛡️" << std::endl;
}