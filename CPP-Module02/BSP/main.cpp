//
// Created by Lorent Evenstar on 8/13/21.
//

#include "Point.hpp"

int main(void) {

	Point	a(4.6f, -1.02f);
	Point	b(6.3f, 4.38f);
	Point	c(12.14f, 2.58f);

	Point	d(7.78f, 2.38f);
	Point	e(10.85f, 1.96f);
	Point	f(4.72f, 0.24f);

	std::cout << std::boolalpha << bsp(a, b, c, d) << std::endl;	// true
	std::cout << bsp(a, b, c, e) << std::endl;	// false
	std::cout << bsp(a, b, c, f) << std::endl;	// false

	return 0;
}