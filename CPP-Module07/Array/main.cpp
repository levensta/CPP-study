//
// Created by Lorent Evenstar on 8/28/21.
//

#include "Array.hpp"

int main() {
	try {
		Array<int>	i(10);
		i[0] = 10;
		std::cout << i[0] << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	try {
		Array<int>	i;
		i[0] = 10;
		std::cout << i[0] << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	try {
		Array<int>	i(10);
		i[0] = 10;
		std::cout << i[11] << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	try {
		Array<std::string>	s(10);
		s[0] = "Hello World!";
		std::cout << s[0] << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	try {
		Array<std::string>	s;
		std::cout << s[0] << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	try {
		Array<std::string>	s(5);
		std::cout << s[-1] << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	return 0;
}