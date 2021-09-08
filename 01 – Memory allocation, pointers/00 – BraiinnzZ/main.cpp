//
// Created by Lorent Evenstar on 8/10/21.
//

#include "Zombie.hpp"

int main() {
	Zombie *zombie = newZombie("Sergey");
	zombie->announce();
	randomChump("Shamil");
	delete zombie;

	return 0;
}