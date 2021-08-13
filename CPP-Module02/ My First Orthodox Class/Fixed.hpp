//
// Created by Lorent Evenstar on 8/13/21.
//

#ifndef CPP_STUDY_FIXED_HPP
#define CPP_STUDY_FIXED_HPP

#include <iostream>

class Fixed {

private:
	int					value;
	static const int	fraction;

public:
	Fixed();
	Fixed(const Fixed &copy);
	~Fixed();
	Fixed &operator=(const Fixed &copy);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};


#endif //CPP_STUDY_FIXED_HPP
