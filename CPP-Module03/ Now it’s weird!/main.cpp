//
// Created by Lorent Evenstar on 8/15/21.
//

#include "DiamondTrap.hpp"

int main() {

	ClapTrap	A("jsupergi");
	ScavTrap	B("kraios");
	FragTrap	C("levensta");
	DiamondTrap	D("wzei");

	A.attack("kraios");
	B.takeDamage(0);
	B.beRepaired(10);
	B.guardGate();
	C.highFivesGuys();
	D.whoAmI();

	return 0;
}