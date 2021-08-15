//
// Created by Lorent Evenstar on 8/15/21.
//

#ifndef CPP_STUDY_CLAPTRAP_HPP
#define CPP_STUDY_CLAPTRAP_HPP

#include <iostream>

class ClapTrap {

private:
	ClapTrap();

protected:
	std::string name;
	int	health;
	int energy;
	int attackDamage;

public:
	ClapTrap(std::string name);
	virtual ~ClapTrap();
	ClapTrap(ClapTrap &copy);

	virtual void attack(std::string const & target);
	virtual void takeDamage(unsigned int amount);
	virtual void beRepaired(unsigned int amount);
};


#endif //CPP_STUDY_CLAPTRAP_HPP
