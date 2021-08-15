//
// Created by Lorent Evenstar on 8/15/21.
//

#ifndef CPP_STUDY_DIAMONDTRAP_HPP
#define CPP_STUDY_DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {

private:
	std::string name;

public:
	DiamondTrap(std::string name);
	virtual ~DiamondTrap();
	DiamondTrap(DiamondTrap &copy);

//	void ScavTrap::attack(const std::string &target);
	virtual void attack(std::string const & target);
	virtual void takeDamage(unsigned int amount);
	virtual void beRepaired(unsigned int amount);
	void whoAmI(void);
};


#endif //CPP_STUDY_DIAMONDTRAP_HPP
