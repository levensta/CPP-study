//
// Created by Lorent Evenstar on 8/17/21.
//

#ifndef CPP_STUDY_DOG_HPP
#define CPP_STUDY_DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{

private:
	Brain *brain;

protected:
	std::string	type;

public:
	Dog();
	virtual ~Dog();
	Dog(Dog &copy);
	virtual Dog &operator=(const Dog &copy);

	virtual std::string getType(void) const;
	virtual void makeSound(void) const;
};


#endif //CPP_STUDY_DOG_HPP
