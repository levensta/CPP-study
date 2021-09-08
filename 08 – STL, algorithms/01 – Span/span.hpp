//
// Created by Lorent Evenstar on 8/31/21.
//

#ifndef CPP_STUDY_SPAN_HPP
#define CPP_STUDY_SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <exception>

class Span {

private:
	std::vector<int> _container;
	unsigned int _size; // capacity
	Span();

public:
	Span(unsigned int n);
	Span(const Span &copy);
	Span &operator=(const Span &copy);
	~Span();

	void addNumber(int number);
	void addNumber(int l_range, int r_range);
	void addNumber(std::vector<int>::iterator l_range, std::vector<int>::iterator r_range);
	int shortestSpan();
	int longestSpan();

	class	SpanException : public std::exception {
	private:
		std::string error_message;
	public:
		SpanException(std::string error_message);
		virtual ~SpanException() throw ();
		virtual const char* what() const throw();
	};

};


#endif //CPP_STUDY_SPAN_HPP
