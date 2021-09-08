//
// Created by Lorent Evenstar on 8/15/21.
//

#include "ClapTrap.hpp"

int main() {

	ClapTrap	A("jsupergi");
	ClapTrap	B("kraios");

	A.attack("kraios");
	B.takeDamage(0);
	B.beRepaired(10);

	return 0;
}