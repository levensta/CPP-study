//
// Created by Lorent Evenstar on 8/14/21.
//

#ifndef CPP_STUDY_POINT_HPP
#define CPP_STUDY_POINT_HPP

#include "Fixed.hpp"

class Point {

private:


public:
	const Fixed x;
	const Fixed y;
	Point();
	Point(const Point &copy);
	Point(const float x, const float y);
	~Point();
	Point &operator=(const Point &copy);
};

bool bsp(const Point a, const Point b, const Point c, const Point point);

#endif //CPP_STUDY_POINT_HPP
