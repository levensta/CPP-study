//
// Created by Lorent Evenstar on 8/4/21.
//

#ifndef CPP_MODULE00_PHONEBOOK_H
#define CPP_MODULE00_PHONEBOOK_H
#include <iostream>
#include "Contact.h"

class PhoneBook {

private:
	Contact contacts[8];
public:
	PhoneBook();
	~PhoneBook();
	void addContact(std::string, std::string);
	void searchContact(int index);
	Contact	getContact(int index);

};


#endif //CPP_MODULE00_PHONEBOOK_H
