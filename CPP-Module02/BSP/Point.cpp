//
// Created by Lorent Evenstar on 8/14/21.
//

#include "Point.hpp"

Point::Point() : x(0), y(0) {};

Point::Point(const float x, const float y) : x(x), y(y) {};

Point::Point(const Point &copy) : x(copy.x), y(copy.y) {
	*this = copy;
}

Point::~Point() {}

Point &Point::operator=(const Point &copy) {
	if (this != &copy) {
//		this->x = copy.x;
//		this->y = copy.y;
	}
	return *this;
}

bool bsp(const Point a, const Point b, const Point c, const Point p) {
	Fixed	zero(0);

	Fixed	alpha = (a.x - p.x) * (b.y - a.y) - (b.x - a.x) * (a.y - p.y);
	Fixed	beta = (b.x - p.x) * (c.y - b.y) - (c.x - b.x) * (b.y - p.y);
	Fixed	gamma = (c.x - p.x) * (a.y - c.y) - (a.x - c.x) * (c.y - p.y);

	if ((alpha > zero && beta > zero && gamma > zero) \
	|| (alpha < zero && beta < zero && gamma < zero)) {
		return true;
	}
	return false;
}
