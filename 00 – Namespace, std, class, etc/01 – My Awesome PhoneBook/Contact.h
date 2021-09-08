//
// Created by Lorent Evenstar on 8/4/21.
//

#ifndef CPP_MODULE00_CONTACT_H
#define CPP_MODULE00_CONTACT_H
#include <iostream>
#include "Attribute.h"
#define ATTRIBUTE_COUNT 5

class Contact {

public:
	Contact();
	~Contact();

	Attribute	attr[ATTRIBUTE_COUNT];
	Attribute	getAttribute(std::string nameAttr);
	Attribute	getAttribute(int numAttr);
	void 		setAttribute(int numAttr, std::string valueAttr);
	void 		initAttributes(std::string namesAttrs);
//	std::string &operator[](int index);
};


#endif //CPP_MODULE00_CONTACT_H
