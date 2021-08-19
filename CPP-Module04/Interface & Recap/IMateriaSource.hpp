//
// Created by Lorent Evenstar on 8/18/21.
//

#ifndef CPP_STUDY_IMATERIASOURCE_HPP
#define CPP_STUDY_IMATERIASOURCE_HPP

#include <iostream>
#include "AMateria.hpp"
// class AMateria;

class IMateriaSource {
public:
	virtual ~IMateriaSource();
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};


#endif //CPP_STUDY_IMATERIASOURCE_HPP
