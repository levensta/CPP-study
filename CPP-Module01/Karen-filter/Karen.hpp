//
// Created by Lorent Evenstar on 8/11/21.
//

#ifndef CPP_STUDY_KAREN_HPP
#define CPP_STUDY_KAREN_HPP

#include <iostream>

class Karen {

private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);

	std::string	arrayLevels[4];
	typedef  void (Karen::*Methods) (void);
	Methods arrayMethods[4]; // массив указателей на ф-ии

public:
	Karen();
	~Karen();
	void complain(std::string level);
};


#endif //CPP_STUDY_KAREN_HPP
