//
// Created by Lorent Evenstar on 8/28/21.
//

#ifndef CPP_STUDY_ITER_HPP
#define CPP_STUDY_ITER_HPP

#include <iostream>

template <typename T>
void	iter(T *addr, size_t len, void(*Foo)(T const &)) {
	for (size_t i = 0; i < len; ++i) {
		Foo(addr[i]);
	}
}

#endif //CPP_STUDY_ITER_HPP
