//
// Created by Lorent Evenstar on 8/10/21.
//

#ifndef CPP_STUDY_ZOMBIE_HPP
#define CPP_STUDY_ZOMBIE_HPP
#include <iostream>

class Zombie {

private:
	std::string	_name;

public:
	Zombie();
	~Zombie();
	void announce();
	void setName(std::string name);

};

Zombie* zombieHorde(int N, std::string name);

#endif //CPP_STUDY_ZOMBIE_HPP
