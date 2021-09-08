//
// Created by Lorent Evenstar on 8/15/21.
//

#ifndef CPP_STUDY_CLAPTRAP_HPP
#define CPP_STUDY_CLAPTRAP_HPP

#include <iostream>

class ClapTrap {

private:
	std::string name;
	int	health;
	int energy;
	int attackDamage;
	ClapTrap();

public:
	ClapTrap(std::string name);
	~ClapTrap();
	ClapTrap(ClapTrap &copy);

	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};


#endif //CPP_STUDY_CLAPTRAP_HPP
