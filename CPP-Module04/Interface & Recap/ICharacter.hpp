//
// Created by Lorent Evenstar on 8/18/21.
//

#ifndef CPP_STUDY_ICHARACTER_HPP
#define CPP_STUDY_ICHARACTER_HPP

#include "AMateria.hpp"

class ICharacter {

public:
	virtual ~ICharacter() {}
	virtual std::string const & getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
};


#endif //CPP_STUDY_ICHARACTER_HPP
