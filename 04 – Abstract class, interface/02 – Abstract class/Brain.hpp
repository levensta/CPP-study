//
// Created by Lorent Evenstar on 8/18/21.
//

#ifndef CPP_STUDY_BRAIN_HPP
#define CPP_STUDY_BRAIN_HPP

#include <iostream>

class Brain {

private:
	std::string	ideasNow[100];

public:
	Brain();
	~Brain();
	Brain(const Brain &copy);
	Brain &operator=(const Brain &copy);
};


#endif //CPP_STUDY_BRAIN_HPP
