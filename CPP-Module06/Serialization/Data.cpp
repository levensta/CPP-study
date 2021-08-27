//
// Created by Lorent Evenstar on 8/27/21.
//

#include "Data.hpp"

uintptr_t serialize(Data* ptr) {
	uintptr_t	p;

	p = reinterpret_cast<uintptr_t>(ptr);
	return p;
}

Data* deserialize(uintptr_t raw) {
	Data	*ptr;

	ptr = reinterpret_cast<Data*>(raw);
	return ptr;
}
