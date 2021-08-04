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

		std::getline(std::cin, command);
		if (command == "EXIT")
			is_exit = true;
		else if (command == "ADD") {
			std::string attribute;
			for (int i = 0; i < 5; ++i) {
				std::cout << "Please enter " << phonebook.getContact(index).getAttribute(i + 1).getName() << " to the new contact’s information" << std::endl;
				std::getline(std::cin, attribute);
				phonebook.getContact(index)[i] = attribute;
			}
		}
		else if (command == "SEARCH") {
			std::cout << phonebook.getContact(0).getAttribute(0).getValue();
		}
		else
			continue;
	}
}