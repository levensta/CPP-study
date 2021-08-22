//
// Created by Lorent Evenstar on 8/21/21.
//

#ifndef CPP_STUDY_PRESIDENTIALPARDONFORM_HPP
#define CPP_STUDY_PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form {
public:
	PresidentialPardonForm(std::string target);
	virtual ~PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm &copy);

	virtual void action() const;
	virtual void execute(const Bureaucrat &executor) const;
};


#endif //CPP_STUDY_PRESIDENTIALPARDONFORM_HPP
