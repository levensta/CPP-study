//
// Created by Lorent Evenstar on 8/17/21.
//

#ifndef CPP_STUDY_CAT_HPP
#define CPP_STUDY_CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{

private:
	Brain *brain;

protected:
	std::string	type;

public:
	Cat();
	virtual ~Cat();
	Cat(Cat &copy);
	virtual Cat &operator=(const Cat &copy);

	virtual std::string getType(void) const;
	virtual void makeSound(void) const;
};

#endif //CPP_STUDY_CAT_HPP
