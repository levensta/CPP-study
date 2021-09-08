//
// Created by Lorent Evenstar on 8/4/21.
//

#ifndef CPP_MODULE00_PHONEBOOK_H
#define CPP_MODULE00_PHONEBOOK_H
#include <iostream>
#include "Contact.h"
#define MAX_CONTACTS 8

class PhoneBook {

private:
	Contact contacts[MAX_CONTACTS];
public:
	PhoneBook();
	~PhoneBook();
	void addContact(Contact contact, int index);
	Contact	getContact(int index);

};


#endif //CPP_MODULE00_PHONEBOOK_H
