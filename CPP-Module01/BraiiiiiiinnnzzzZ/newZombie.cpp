//
// Created by Lorent Evenstar on 8/10/21.
//

#include "Zombie.hpp"

Zombie* newZombie( std::string name ) {
	Zombie *zombie = new Zombie(name);
	return zombie;
}