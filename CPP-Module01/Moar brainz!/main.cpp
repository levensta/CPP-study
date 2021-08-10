//
// Created by Lorent Evenstar on 8/10/21.
//

#include "Zombie.hpp"

int main() {
	Zombie	*horde = zombieHorde(3, "Sergey");
	for (int i = 0; i < 3; ++i) {
		horde[i].announce();
	}
	delete [] horde;

	return 0;
}