//
// Created by Lorent Evenstar on 8/21/21.
//

#ifndef CPP_STUDY_ROBOTOMYREQUESTFORM_HPP
#define CPP_STUDY_ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form {
public:
	RobotomyRequestForm(std::string target);
	virtual ~RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm &copy);

	virtual void action() const;
	virtual void execute(const Bureaucrat &executor) const;
};


#endif //CPP_STUDY_ROBOTOMYREQUESTFORM_HPP
