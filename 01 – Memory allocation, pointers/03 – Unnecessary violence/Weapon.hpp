//
// Created by Lorent Evenstar on 8/10/21.
//

#ifndef CPP_STUDY_WEAPON_HPP
#define CPP_STUDY_WEAPON_HPP

#include <iostream>

class Weapon {

private:
	std::string type;

public:
	Weapon();
	~Weapon();
	Weapon(std::string type);
	Weapon &operator=(const Weapon &copy);

	const	std::string &getType();
	void	setType(std::string type);
};


#endif //CPP_STUDY_WEAPON_HPP
