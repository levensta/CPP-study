//
// Created by Lorent Evenstar on 8/15/21.
//

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {

	ClapTrap	A("jsupergi");
	ScavTrap	B("kraios");
	FragTrap	C("levensta");

	A.attack("kraios");
	B.takeDamage(0);
	B.beRepaired(10);
	B.guardGate();
	C.highFivesGuys();

	return 0;
}