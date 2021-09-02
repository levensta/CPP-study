//
// Created by Lorent Evenstar on 8/30/21.
//

#ifndef CPP_STUDY_EASYFIND_HPP
#define CPP_STUDY_EASYFIND_HPP

#include <iostream>
#include <algorithm>
template<typename T>
typename T::iterator easyfind(T &container, int n) {
	return std::find(container.begin(), container.end(), n);
}

#endif //CPP_STUDY_EASYFIND_HPP
