//
// Created by Lorent Evenstar on 8/27/21.
//

#ifndef CPP_STUDY_SCALAR_HPP
#define CPP_STUDY_SCALAR_HPP

# include <iostream>
# include <cmath>
# include <string>
# include <climits>
# include <iomanip>
# include <exception>

class Scalar {

private:
	std::string	_str;
	double 		_longNum;
	int 		_sign;
	bool 		_isPoint;

public:
	Scalar(std::string str);
	~Scalar();
	Scalar(const Scalar &copy);

	Scalar &operator=(const Scalar &copy);
	void toInt();
	void toChar();
	void toFloat();
	void toDouble();
	void parse();
};


#endif //CPP_STUDY_SCALAR_HPP
