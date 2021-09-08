//
// Created by Lorent Evenstar on 8/4/21.
//

#ifndef CPP_MODULE00_ATTRIBUTE_H
#define CPP_MODULE00_ATTRIBUTE_H
#include <iostream>

class Attribute {

private:
	int 		_numAttr;
	std::string _nameAttr;
	std::string _valueAttr;

public:
	Attribute();
	~Attribute();

	void		setAttribute(int numAttr, std::string nameAttr, std::string valueAttr);
	int			&getNum();
	std::string &getName();
	std::string &getValue();
};


#endif //CPP_MODULE00_ATTRIBUTE_H
