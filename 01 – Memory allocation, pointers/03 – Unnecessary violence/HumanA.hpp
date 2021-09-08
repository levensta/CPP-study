//
// Created by Lorent Evenstar on 8/10/21.
//

#ifndef CPP_STUDY_HUMANA_HPP
#define CPP_STUDY_HUMANA_HPP

#include "Weapon.hpp"

class HumanA {

private:
	std::string	name;
	Weapon		&weapon;


public:
	~HumanA();
	HumanA(std::string name, Weapon &weapon);

	void	attack();
};


#endif //CPP_STUDY_HUMANA_HPP
