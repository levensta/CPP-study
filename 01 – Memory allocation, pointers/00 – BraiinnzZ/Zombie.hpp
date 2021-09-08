//
// Created by Lorent Evenstar on 8/10/21.
//

#ifndef CPP_STUDY_ZOMBIE_HPP
#define CPP_STUDY_ZOMBIE_HPP
#include <iostream>

class Zombie {

private:
	std::string	_name;
	Zombie();

public:
	Zombie(std::string name);
	~Zombie();
	void announce();

};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif //CPP_STUDY_ZOMBIE_HPP
