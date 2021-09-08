//
// Created by Lorent Evenstar on 8/15/21.
//

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap (name), FragTrap(name), ScavTrap(name) {
	this->health = FragTrap::health;
	this->energy = ScavTrap::energy;
	this->attackDamage = FragTrap::attackDamage;
	this->name = name;
	ClapTrap::name = name + "_clap_name";
	std::cout << "DiamondTrap " << this->name << " was created" << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << this->name << " was deleted" << std::endl;
};

void DiamondTrap::attack(const std::string &target) {
	FragTrap::attack(target);
//	std::cout << "DiamondTrap " << this->name << " attack " << target << ", causing " << this->attackDamage << " points of damage" << std::endl;
}

void DiamondTrap::takeDamage(unsigned int amount) {
	this->health -= amount;
	if (this->health < 0) {
		this->health = 0;
	}
	std::cout << "DiamondTrap " << this->name << " take " << amount << " damage. He has " << this->health << " hp left" << std::endl;
}

void DiamondTrap::beRepaired(unsigned int amount) {
	this->health += amount;
	std::cout << "DiamondTrap " << this->name << " recovered " << amount << " health." << " He has " << this->health << " hp left"<< std::endl;
}

void DiamondTrap::whoAmI() {
	std::cout << "👤 DiamondTrap name: " << this->name << " 👤" << std::endl;
	std::cout << "👤 ClapTrap name: " << ClapTrap::name << " 👤" << std::endl;
//	std::cout << this->health << " " << this->attackDamage << " " << this->energy << std::endl;
}
