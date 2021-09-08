//
// Created by Lorent Evenstar on 8/30/21.
//

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <set>
#include <deque>

int     main() {
	std::cout << "--------------------------------------------------------------------------" << std::endl;
	std::cout << "Vectors tests: " << std::endl;
	{
		std::vector<int>	vec;
		int	n = 10;
		vec.push_back(n);
		if (easyfind(vec, n) != vec.end())
			std::cout << n << "... – \033[1;32mYES\033[0m" << std::endl;
		else
			std::cout << n << "... – \033[1;31mNO\033[0m" << std::endl;
		n = 20;
		if (easyfind(vec, n) != vec.end())
			std::cout << n << "... – \033[1;32mYES\033[0m" << std::endl;
		else
			std::cout << n << "... – \033[1;31mNO\033[0m" << std::endl;
		vec.push_back(n);
		if (easyfind(vec, n) != vec.end())
			std::cout << n << "... – \033[1;32mYES\033[0m" << std::endl;
		else
			std::cout << n << "... – \033[1;31mNO\033[0m" << std::endl;
		n = -57;
		if (easyfind(vec, n) != vec.end())
			std::cout << n << "... – \033[1;32mYES\033[0m" << std::endl;
		else
			std::cout << n << "... – \033[1;31mNO\033[0m" << std::endl;
		vec.push_back(n);
		if (easyfind(vec, n) != vec.end())
			std::cout << n << "... – \033[1;32mYES\033[0m" << std::endl;
		else
			std::cout << n << "... – \033[1;31mNO\033[0m" << std::endl;
		n = 2000000000;
		if (easyfind(vec, n) != vec.end())
			std::cout << n << "... – \033[1;32mYES\033[0m" << std::endl;
		else
			std::cout << n << "... – \033[1;31mNO\033[0m" << std::endl;
		vec.push_back(n);
		if (easyfind(vec, n) != vec.end())
			std::cout << n << "... – \033[1;32mYES\033[0m" << std::endl;
		else
			std::cout << n << "... – \033[1;31mNO\033[0m" << std::endl;
	}
	std::cout << "--------------------------------------------------------------------------" << std::endl;
	std::cout << "Lists tests: " << std::endl;
	{
		std::list<int>	l;
		int	n = 10;
		l.push_back(n);
		if (easyfind(l, n) != l.end())
			std::cout << n << "... – \033[1;32mYES\033[0m" << std::endl;
		else
			std::cout << n << "... – \033[1;31mNO\033[0m" << std::endl;
		n = 20;
		if (easyfind(l, n) != l.end())
			std::cout << n << "... – \033[1;32mYES\033[0m" << std::endl;
		else
			std::cout << n << "... – \033[1;31mNO\033[0m" << std::endl;
		l.push_back(n);
		if (easyfind(l, n) != l.end())
			std::cout << n << "... – \033[1;32mYES\033[0m" << std::endl;
		else
			std::cout << n << "... – \033[1;31mNO\033[0m" << std::endl;
		n = -57;
		if (easyfind(l, n) != l.end())
			std::cout << n << "... – \033[1;32mYES\033[0m" << std::endl;
		else
			std::cout << n << "... – \033[1;31mNO\033[0m" << std::endl;
		l.push_back(n);
		if (easyfind(l, n) != l.end())
			std::cout << n << "... – \033[1;32mYES\033[0m" << std::endl;
		else
			std::cout << n << "... – \033[1;31mNO\033[0m" << std::endl;
		n = 2000000000;
		if (easyfind(l, n) != l.end())
			std::cout << n << "... – \033[1;32mYES\033[0m" << std::endl;
		else
			std::cout << n << "... – \033[1;31mNO\033[0m" << std::endl;
		l.push_back(n);
		if (easyfind(l, n) != l.end())
			std::cout << n << "... – \033[1;32mYES\033[0m" << std::endl;
		else
			std::cout << n << "... – \033[1;31mNO\033[0m" << std::endl;
	}
	std::cout << "--------------------------------------------------------------------------" << std::endl;
	std::cout << "Set tests: " << std::endl;
	{
		std::set<int>	s;
		int	n = 10;
		s.insert(n);
		if (easyfind(s, n) != s.end())
			std::cout << n << "... – \033[1;32mYES\033[0m" << std::endl;
		else
			std::cout << n << "... – \033[1;31mNO\033[0m" << std::endl;
		n = 20;
		if (easyfind(s, n) != s.end())
			std::cout << n << "... – \033[1;32mYES\033[0m" << std::endl;
		else
			std::cout << n << "... – \033[1;31mNO\033[0m" << std::endl;
		s.insert(n);
		if (easyfind(s, n) != s.end())
			std::cout << n << "... – \033[1;32mYES\033[0m" << std::endl;
		else
			std::cout << n << "... – \033[1;31mNO\033[0m" << std::endl;
		n = -57;
		if (easyfind(s, n) != s.end())
			std::cout << n << "... – \033[1;32mYES\033[0m" << std::endl;
		else
			std::cout << n << "... – \033[1;31mNO\033[0m" << std::endl;
		s.insert(n);
		if (easyfind(s, n) != s.end())
			std::cout << n << "... – \033[1;32mYES\033[0m" << std::endl;
		else
			std::cout << n << "... – \033[1;31mNO\033[0m" << std::endl;
		n = 2000000000;
		if (easyfind(s, n) != s.end())
			std::cout << n << "... – \033[1;32mYES\033[0m" << std::endl;
		else
			std::cout << n << "... – \033[1;31mNO\033[0m" << std::endl;
		s.insert(n);
		if (easyfind(s, n) != s.end())
			std::cout << n << "... – \033[1;32mYES\033[0m" << std::endl;
		else
			std::cout << n << "... – \033[1;31mNO\033[0m" << std::endl;
	}
	std::cout << "--------------------------------------------------------------------------" << std::endl;
	std::cout << "Deque tests: " << std::endl;
	{
		std::deque<int>	d;
		int	n = 10;
		d.push_back(n);
		if (easyfind(d, n) != d.end())
			std::cout << n << "... – \033[1;32mYES\033[0m" << std::endl;
		else
			std::cout << n << "... – \033[1;31mNO\033[0m" << std::endl;
		n = 20;
		if (easyfind(d, n) != d.end())
			std::cout << n << "... – \033[1;32mYES\033[0m" << std::endl;
		else
			std::cout << n << "... – \033[1;31mNO\033[0m" << std::endl;
		d.push_front(n);
		if (easyfind(d, n) != d.end())
			std::cout << n << "... – \033[1;32mYES\033[0m" << std::endl;
		else
			std::cout << n << "... – \033[1;31mNO\033[0m" << std::endl;
		n = -57;
		if (easyfind(d, n) != d.end())
			std::cout << n << "... – \033[1;32mYES\033[0m" << std::endl;
		else
			std::cout << n << "... – \033[1;31mNO\033[0m" << std::endl;
		d.push_front(n);
		if (easyfind(d, n) != d.end())
			std::cout << n << "... – \033[1;32mYES\033[0m" << std::endl;
		else
			std::cout << n << "... – \033[1;31mNO\033[0m" << std::endl;
		n = 2000000000;
		if (easyfind(d, n) != d.end())
			std::cout << n << "... – \033[1;32mYES\033[0m" << std::endl;
		else
			std::cout << n << "... – \033[1;31mNO\033[0m" << std::endl;
		d.push_back(n);
		if (easyfind(d, n) != d.end())
			std::cout << n << "... – \033[1;32mYES\033[0m" << std::endl;
		else
			std::cout << n << "... – \033[1;31mNO\033[0m" << std::endl;
	}
	std::cout << "--------------------------------------------------------------------------" << std::endl;
	return 0;
}