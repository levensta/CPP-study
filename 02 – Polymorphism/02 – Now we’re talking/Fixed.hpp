//
// Created by Lorent Evenstar on 8/13/21.
//

#ifndef CPP_STUDY_FIXED_HPP
#define CPP_STUDY_FIXED_HPP

#include <iostream>
#include <ostream>
#include <cmath>
#include <cfloat>

#define EPS 2.7182f

class Fixed {

private:
	int					value;
	static const int	fraction;
	static const int 	exp;
	static const int 	myPow(void);
	static const int	theSmallestRepresentableEPS;
	static const int	getSmallestEPS(void);

public:
	Fixed();
	Fixed(const int value);
	Fixed(const float value);
	Fixed(const Fixed &copy);
	~Fixed();
	Fixed &operator=(const Fixed &copy);
	Fixed operator+(const Fixed copy) const;
	Fixed operator-(const Fixed copy);
	Fixed operator*(const Fixed copy);
	Fixed operator/(const Fixed copy);
	Fixed &operator++();		// pre-increment
	Fixed operator++(int n);	// post-increment
	Fixed &operator--();		// pre-decrement
	Fixed operator--(int n);	// post-decrement

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float 	toFloat(void) const;
	int 	toInt(void) const;
	static Fixed &min(Fixed &first, Fixed &second);
	static Fixed const &min(Fixed const &first, Fixed const &second);
	static Fixed &max(Fixed &first, Fixed &second);
	static Fixed const &max(Fixed const &first, Fixed const &second);
};

std::ostream&	operator<<(std::ostream& os, const Fixed &obj);
bool 			operator==(const Fixed &first, const Fixed &second);
bool 			operator!=(const Fixed &first, const Fixed &second);
bool 			operator>=(const Fixed &first, const Fixed &second);
bool 			operator<=(const Fixed &first, const Fixed &second);
bool 			operator<(const Fixed &first, const Fixed &second);
bool 			operator>(const Fixed &first, const Fixed &second);

#endif //CPP_STUDY_FIXED_HPP
