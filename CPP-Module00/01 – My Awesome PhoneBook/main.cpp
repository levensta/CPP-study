//
// Created by Lorent Evenstar on 8/4/21.
//

// first name,last name,nickname,phone number,darkest secret
#include "PhoneBook.h"

int	main ()
{
	PhoneBook	phonebook;
	bool		is_exit = false;
	int 		index = 0;

	while (!is_exit) {
		std::string command;

		std::cout << "Enter one of the commands: ADD, SEARCH, EXIT" << std::endl;
		std::getline(std::cin, command);
		if (command == "EXIT")
			is_exit = true;
		else if (command == "ADD") {
			Contact		newContact;
			std::string str;

			for (int i = 0; i < 5; ++i) {
				std::cout << "Please enter \33[1;32m" << phonebook.getContact(index).getAttribute(i + 1).getName() << "\33[0m to the new contact’s information" << std::endl;
				std::getline(std::cin, str);
				newContact.setAttribute(i, str);
				phonebook.addContact(newContact, index++);
			}
		}
		else if (command == "SEARCH") {
			std::cout << phonebook.getContact(0).getAttribute("first_name").getValue() << std::endl;
		}
		else
			continue;
	}
}