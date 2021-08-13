//
// Created by Lorent Evenstar on 8/13/21.
//

#ifndef CPP_STUDY_FIXED_HPP
#define CPP_STUDY_FIXED_HPP

#include <iostream>
#include <ostream>
#include <cmath>

class Fixed {

private:
	int					value;
	static const int	fraction;
	static const int 	exp;
	static const int 	myPow(void);

public:
	Fixed();
	Fixed(const int value);
	Fixed(const float value);
	Fixed(const Fixed &copy);
	~Fixed();
	Fixed &operator=(const Fixed &copy);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float 	toFloat(void) const;
	int 	toInt(void) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif //CPP_STUDY_FIXED_HPP
