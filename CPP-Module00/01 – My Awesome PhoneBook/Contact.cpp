//
// Created by Lorent Evenstar on 8/4/21.
//

#include "Contact.h"

Contact::Contact() {
	this->attr[0].setAttribute(1, "first_name", "");
	this->attr[1].setAttribute(2, "last_name", "");
	this->attr[2].setAttribute(3, "nickname", "");
	this->attr[3].setAttribute(4, "phone_number", "");
	this->attr[4].setAttribute(5, "darkest_secret", "");
}

Contact::~Contact() {}

Attribute Contact::getAttribute(std::string nameAttr) {
	for (int i = 0; i < 5; ++i) {
		if (this->attr[i].getName() == nameAttr)
			return (this->attr[i]);
	}
	return (Attribute());
}

Attribute Contact::getAttribute(int numAttr) {
	for (int i = 0; i < 5; ++i) {
		if (this->attr[i].getNum() == numAttr)
			return (this->attr[i]);
	}
	return (Attribute());
}

void Contact::setAttribute(int numAttr, std::string valueAttr) {
	this->attr[numAttr].getValue() = valueAttr;
}

void Contact::initAttributes(std::string namesAttrs) {
	size_t	pos = 0;
	size_t	end;
	for (int i = 0; i < 5; ++i) {
		end = namesAttrs.find(";", pos);
		this->attr[i].setAttribute(i + 1, namesAttrs.substr(pos, end - pos), "");
		pos = end + 1;
	}
}

//std::string &Contact::operator[](int index) {
//	return (this->attr[index].getValue());
//}
