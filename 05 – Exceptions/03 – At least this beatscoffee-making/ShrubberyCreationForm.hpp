//
// Created by Lorent Evenstar on 8/21/21.
//

#ifndef CPP_STUDY_SHRUBBERYCREATIONFORM_HPP
#define CPP_STUDY_SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form {
public:
	ShrubberyCreationForm(std::string target);
	virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm &copy);

	virtual void action() const;
	virtual void execute(const Bureaucrat &executor) const;
};


#endif //CPP_STUDY_SHRUBBERYCREATIONFORM_HPP
