//
// Created by Lorent Evenstar on 8/4/21.
//

#include "Attribute.h"

Attribute::Attribute() {
	this->setAttribute(0, "", "");
}

Attribute::~Attribute() {}

void	Attribute::setAttribute(int numAttr, std::string nameAttr, std::string valueAttr) {
	this->_nameAttr = numAttr;
	this->_nameAttr = nameAttr;
	this->_valueAttr = valueAttr;
}

int 	&Attribute::getNum() {
	return (this->_numAttr);
}

std::string &Attribute::getName() {
	return (this->_nameAttr);
}

std::string &Attribute::getValue() {
	return (this->_valueAttr);
}

