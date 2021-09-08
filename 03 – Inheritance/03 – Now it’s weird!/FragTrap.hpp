//
// Created by Lorent Evenstar on 8/15/21.
//

#ifndef CPP_STUDY_FRAGTRAP_HPP
#define CPP_STUDY_FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {

public:
	FragTrap(std::string name);
	virtual ~FragTrap();
	FragTrap(FragTrap &copy);

	virtual void attack(std::string const & target);
	virtual void takeDamage(unsigned int amount);
	virtual void beRepaired(unsigned int amount);
	void highFivesGuys(void);
};


#endif //CPP_STUDY_FRAGTRAP_HPP
