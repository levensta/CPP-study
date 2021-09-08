//
// Created by Lorent Evenstar on 8/15/21.
//

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	this->health = 100;
	this->energy = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap " << this->name << " was created" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << this->name << " was deleted" << std::endl;
};

void FragTrap::attack(const std::string &target) {
	std::cout << "FragTrap " << this->name << " attack " << target << ", causing " << this->attackDamage << " points of damage" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount) {
	this->health -= amount;
	if (this->health < 0) {
		this->health = 0;
	}
	std::cout << "FragTrap " << this->name << " take " << amount << " damage. He has " << this->health << " hp left" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount) {
	this->health += amount;
	std::cout << "FragTrap " << this->name << " recovered " << amount << " health." << " He has " << this->health << " hp left"<< std::endl;
}

void FragTrap::highFivesGuys() {
	std::cout << "🙏 SUPER ULTIMATE HIGH FIVE 🙏" << std::endl;
}
