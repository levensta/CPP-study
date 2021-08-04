//
// Created by Lorent Evenstar on 8/4/21.
//

#ifndef CPP_MODULE00_CONTACT_H
#define CPP_MODULE00_CONTACT_H
#include <iostream>
#include "Attribute.h"

class Contact {

public:
	Contact();
	~Contact();

	Attribute	attr[5];
	Attribute	getAttribute(std::string nameAttr);
	Attribute	getAttribute(int numAttr);
	void 		initAttributes(std::string namesAttrs);
	std::string &operator[](int index);
};


#endif //CPP_MODULE00_CONTACT_H
