//
// Created by Lorent Evenstar on 8/4/21.
//

// first name,last name,nickname,phone number,darkest secret
#include "PhoneBook.h"
#include <iomanip>

bool has_only_digits(const std::string str){
	return str.find_first_not_of( "0123456789" ) == std::string::npos;
}

int	main ()
{
	PhoneBook	phonebook;
	bool		is_exit = false;
	int 		index = 0;			// индекс контакта в массиве
	int 		countContacts = 0;	// кол-во непустых контактов

	while (!is_exit && !std::cin.eof()) {
		std::string command;

		std::cout << "Enter one of the commands: ADD, SEARCH, EXIT" << std::endl;
		std::getline(std::cin, command);
		if (command == "EXIT") {
			is_exit = true;
		}
		else if (command == "ADD") {
			Contact	newContact;
			std::string str;
			if (index >= MAX_CONTACTS) {
				index = 0;
			}
			for (int i = 0; i < ATTRIBUTE_COUNT; ++i) {
				std::cout << "Please enter \33[1;32m" << phonebook.getContact(index).getAttribute(i + 1).getName() << "\33[0m to the new contact’s information" << std::endl;
				std::getline(std::cin, str);
				newContact.setAttribute(i, str);
			}
			phonebook.addContact(newContact, index++);
			if (countContacts < MAX_CONTACTS) {
				++countContacts;
			}
		}
		else if (command == "SEARCH" && countContacts) {
			std::cout << "|     index|first_name| last_name|  nickname|" << std::endl;
			for (int i = 0; i < countContacts; i++) {
				std::string data;

				std::cout << "|";
				std::cout << std::setw(10) << i << "|";
				for (int j = 1; j < 4; ++j) {
					data = phonebook.getContact(i).getAttribute(j).getValue();
					if (data.length() > 10)
						data = data.substr(0, 9) + ".";
					std::cout << std::setw(10) << data << "|";
				}
				std::cout << std::endl;
			}
			std::cout << "Select a contact index to view information about him" << std::endl;
			std::getline(std::cin, command);
			if (!has_only_digits(command)) {
				std::cout << "Invalid input" << std::endl;
			}
			else if (std::stoi(command) >= 0 && std::stoi(command) <= countContacts - 1) {
				for (int i = 0; i < ATTRIBUTE_COUNT; ++i) {
					std::cout << phonebook.getContact(std::stoi(command)).getAttribute(i + 1).getValue() << std::endl;
				}
			}
			else {
				std::cout << "Invalid index" << std::endl;
			}
		}
		else
			continue;
	}
}