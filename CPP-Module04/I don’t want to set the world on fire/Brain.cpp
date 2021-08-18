//
// Created by Lorent Evenstar on 8/18/21.
//

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain was created" << std::endl;
}

Brain::~Brain() {
	std::cout << "Brain was deleted" << std::endl;
}

Brain::Brain(const Brain &copy) {
	*this = copy;
}

Brain &Brain::operator=(const Brain &copy) {
	if (this != &copy) {
		for (int i = 0; i < 100; ++i) {
			this->ideasNow[i] = copy.ideasNow[i];
		}
	}
	return *this;
}
