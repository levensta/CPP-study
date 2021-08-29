//
// Created by Lorent Evenstar on 8/28/21.
//

#ifndef CPP_STUDY_WHATEVER_HPP
#define CPP_STUDY_WHATEVER_HPP

#include <iostream>

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

//class Awesome {
//
//public:
//	Awesome( int n ) : _n( n ) {}
//
//	bool operator==( Awesome const & rhs ) const {
//		return (this->_n == rhs._n);
//	}
//
//	bool operator!=( Awesome const & rhs ) const{
//		return (this->_n != rhs._n);
//	}
//
//	bool operator>( Awesome const & rhs ) const {
//		return (this->_n > rhs._n);
//	}
//
//	bool operator<( Awesome const & rhs ) const {
//		return (this->_n < rhs._n);
//	}
//
//	bool operator>=( Awesome const & rhs ) const {
//		return (this->_n >= rhs._n);
//	}
//
//	bool operator<=( Awesome const & rhs ) const {
//		return (this->_n <= rhs._n);
//	}
//
//	int getN(void) const {
//		return this->_n;
//	}
//
//private:
//	int _n;
//};
//
//std::ostream &operator<<(std::ostream &os, const Awesome &obj) {
//	os << obj.getN();
//	return os;
//}

#endif //CPP_STUDY_WHATEVER_HPP
