//
// Created by Lorent Evenstar on 8/15/21.
//

#ifndef CPP_STUDY_SCAVTRAP_HPP
#define CPP_STUDY_SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

public:
	ScavTrap(std::string name);
	virtual ~ScavTrap();
	ScavTrap(ScavTrap &copy);

	virtual void attack(std::string const & target);
	virtual void takeDamage(unsigned int amount);
	virtual void beRepaired(unsigned int amount);
	void guardGate(void);
};


#endif //CPP_STUDY_SCAVTRAP_HPP
