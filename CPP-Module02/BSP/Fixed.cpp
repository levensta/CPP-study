//
// Created by Lorent Evenstar on 8/13/21.
//

#include "Fixed.hpp"

const int Fixed::fraction = 8;
const int Fixed::exp = Fixed::myPow();
const int Fixed::theSmallestRepresentableEPS = Fixed::getSmallestEPS();

Fixed::Fixed() : value(0) {
//	std::cout << "Default constructor called" << std::endl;
};

Fixed::~Fixed() {
//	std::cout << "Destructor called" << std::endl;
};

Fixed::Fixed(const Fixed &copy) {
//	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::Fixed(const int value) {
	this->value = value << this->fraction;
}

Fixed::Fixed(const float value) {
	this->value = static_cast<int>(roundf(value * this->exp));
}

Fixed &Fixed::operator=(const Fixed &copy) {
//	std::cout << "Assignation operator called" << std::endl;
	if (this != &copy) {
		this->value = copy.getRawBits();
	}
	return *this;
}

Fixed Fixed::operator+(const Fixed copy) const {
	return Fixed(this->toFloat() + copy.toFloat());
}

Fixed Fixed::operator-(const Fixed copy) const {
	return Fixed(this->toFloat() - copy.toFloat());
}

Fixed Fixed::operator*(const Fixed copy) const {
	return Fixed(this->toFloat() * copy.toFloat());
}

Fixed Fixed::operator/(const Fixed copy) const {
	return Fixed(this->toFloat() / copy.toFloat());
}

Fixed &Fixed::operator++() {
	this->value += this->theSmallestRepresentableEPS;
	return *this;
}

Fixed Fixed::operator++(int n) {
	Fixed	tmp(this->toFloat());
	this->value += this->theSmallestRepresentableEPS;
	return tmp;
}

Fixed &Fixed::operator--() {
	this->value -= this->theSmallestRepresentableEPS;
	return *this;
}

Fixed Fixed::operator--(int n) {
	Fixed	tmp(this->toFloat());
	this->value -= this->theSmallestRepresentableEPS;
	return tmp;
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj) {
	os << obj.toFloat();
	return os;
}

bool 			operator==(const Fixed &first, const Fixed &second) {
	return first.getRawBits() == second.getRawBits();
}

bool 			operator!=(const Fixed &first, const Fixed &second) {
	return first.getRawBits() != second.getRawBits();
}

bool 			operator>=(const Fixed &first, const Fixed &second) {
	return first.getRawBits() >= second.getRawBits();
}

bool 			operator<=(const Fixed &first, const Fixed &second) {
	return first.getRawBits() <= second.getRawBits();
}

bool 			operator<(const Fixed &first, const Fixed &second) {
	return first.getRawBits() < second.getRawBits();
}

bool 			operator>(const Fixed &first, const Fixed &second) {
	return first.getRawBits() > second.getRawBits();
}

int Fixed::getRawBits() const {
//	std::cout << "getRawBits member function called" << std::endl;
	return this->value;
}

void Fixed::setRawBits(const int raw) {
//	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}

int Fixed::toInt() const {
	return this->value >> this->fraction;
}

float Fixed::toFloat() const {
	return static_cast<float>(this->value) / this->exp;
}

const int Fixed::myPow() {
	int value = 1;

	for (int i = 0; i < fraction; ++i) {
		value *= 2;
	}
	return (value);
}

const int Fixed::getSmallestEPS() {
	int	e = static_cast<int>(roundf(EPS * exp));
	while (e >> 1 > 0) {
		e = e >> 1;
	}
	return e;
}

Fixed &Fixed::min(Fixed &first, Fixed &second) {
	if (first < second) {
		return first;
	}
	return second;
}

Fixed const &Fixed::min(Fixed const &first, Fixed const &second) {
	if (first < second) {
		return first;
	}
	return second;
}

Fixed &Fixed::max(Fixed &first, Fixed &second) {
	if (first > second) {
		return first;
	}
	return second;
}

Fixed const &Fixed::max(Fixed const &first, Fixed const &second) {
	if (first > second) {
		return first;
	}
	return second;
}