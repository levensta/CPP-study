//
// Created by Lorent Evenstar on 8/27/21.
//

#include "Data.hpp"

int main() {
	Data ptr;
	std::cout << &ptr << std::endl;
	Data *ptr1 = deserialize(serialize(&ptr));
	std::cout << ptr1 << std::endl;
	return 0;
}