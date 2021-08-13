//
// Created by Lorent Evenstar on 8/13/21.
//

#include "Fixed.hpp"

const int Fixed::fraction = 8;

Fixed::Fixed() : value(0) {
	std::cout << "Default constructor called" << std::endl;
};

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
};

Fixed::Fixed(const Fixed &copy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed &Fixed::operator=(const Fixed &copy) {
	std::cout << "Assignation operator called" << std::endl;
	if (this != &copy) {
		this->value = copy.getRawBits();
	}
	return *this;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->value;
}

void Fixed::setRawBits(const int raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}