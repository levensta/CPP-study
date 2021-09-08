//
// Created by Lorent Evenstar on 8/17/21.
//

#ifndef CPP_STUDY_WRONGANIMAL_HPP
#define CPP_STUDY_WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {

protected:
	std::string	type;

public:
	WrongAnimal();
	virtual ~WrongAnimal();
	WrongAnimal(WrongAnimal &copy);
	virtual WrongAnimal &operator=(const WrongAnimal &copy);

	virtual std::string getType(void) const;
	virtual void makeSound(void) const;
};


#endif //CPP_STUDY_WRONGANIMAL_HPP
