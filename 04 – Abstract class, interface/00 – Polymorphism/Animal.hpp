//
// Created by Lorent Evenstar on 8/17/21.
//

#ifndef CPP_STUDY_ANIMAL_HPP
#define CPP_STUDY_ANIMAL_HPP

#include <iostream>

class Animal {

protected:
	std::string	type;

public:
	Animal();
	virtual ~Animal();
	Animal(Animal &copy);
	virtual Animal &operator=(const Animal &copy);

	virtual std::string getType(void) const;
	virtual void makeSound(void) const;
};


#endif //CPP_STUDY_ANIMAL_HPP
