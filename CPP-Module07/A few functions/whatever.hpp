//
// Created by Lorent Evenstar on 8/28/21.
//

#ifndef CPP_STUDY_WHATEVER_HPP
#define CPP_STUDY_WHATEVER_HPP

template <typename T>
T min(const T &a, const T &b) {
	return a < b ? a : b;
}

template <typename T>
T max(const T &a, const T &b) {
	return a > b ? a : b;
}

template <typename T>
void swap(T &a, T &b) {
	T	tmp = a;

	a = b;
	b = tmp;
}

#endif //CPP_STUDY_WHATEVER_HPP
