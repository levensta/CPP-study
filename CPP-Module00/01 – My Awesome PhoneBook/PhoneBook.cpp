//
// Created by Lorent Evenstar on 8/4/21.
//

#include "PhoneBook.h"

PhoneBook::PhoneBook() {
	for (int i = 0; i < 8; ++i) {
		this->contacts[i].initAttributes("first_name;last_name;nickname;phone_number;darkest_secret");
	}
}

PhoneBook::~PhoneBook() {}

Contact	PhoneBook::getContact(int index) {
	return (this->contacts[index]);
}

void PhoneBook::addContact(Contact contact, int index) {
	this->contacts[index] = contact;
}