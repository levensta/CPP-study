//
// Created by Lorent Evenstar on 8/10/21.
//

#ifndef CPP_STUDY_HumanB_HPP
#define CPP_STUDY_HumanB_HPP

#include "Weapon.hpp"

class HumanB {

private:
	std::string	name;
	Weapon		*weapon;

public:
	~HumanB();
	HumanB(std::string name);

	void	attack();
	void 	setWeapon(Weapon &weapon);
};


#endif //CPP_STUDY_HumanB_HPP
