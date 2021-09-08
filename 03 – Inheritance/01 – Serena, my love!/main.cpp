//
// Created by Lorent Evenstar on 8/15/21.
//

#include "ScavTrap.hpp"

int main() {

	ClapTrap	A("jsupergi");
	ScavTrap	B("kraios");

	A.attack("kraios");
	B.takeDamage(0);
	B.beRepaired(10);
	B.guardGate();

	return 0;
}