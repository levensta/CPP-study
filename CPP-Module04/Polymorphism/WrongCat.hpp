//
// Created by Lorent Evenstar on 8/17/21.
//

#ifndef CPP_STUDY_WRONGCAT_HPP
#define CPP_STUDY_WRONGCAT_HPP

#include "WrongAnimal.hpp"

//public Animal

class WrongCat : public WrongAnimal {

protected:
	std::string	type;

public:
	WrongCat();
	virtual ~WrongCat();
	WrongCat(WrongCat &copy);
	virtual WrongCat &operator=(const WrongCat &copy);

//	virtual std::string getType(void) const;
//	virtual void makeSound(void) const;
};

#endif //CPP_STUDY_WRONGCAT_HPP
