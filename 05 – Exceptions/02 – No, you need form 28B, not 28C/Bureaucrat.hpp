//
// Created by Lorent Evenstar on 8/20/21.
//

#ifndef CPP_STUDY_BUREAUCRAT_HPP
#define CPP_STUDY_BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat {

private:
	const std::string _name;
	int _grade;
	Bureaucrat();

public:
	Bureaucrat(std::string name, int grade);
	~Bureaucrat();
	Bureaucrat(const Bureaucrat &copy);
	Bureaucrat &operator=(const Bureaucrat &copy);

	const std::string getName(void) const;
	int getGrade(void) const;
	void incrementGrade(int n);
	void decrementGrade(int n);
	void signForm(Form &form);
	void executeForm(const Form &form);

	class	GradeTooHighException : public std::exception {
	public:
		GradeTooHighException();
		virtual ~GradeTooHighException() throw ();
		virtual const char* what() const throw();
	};

	class	GradeTooLowException : public std::exception {
	public:
		GradeTooLowException();
		virtual ~GradeTooLowException() throw ();
		virtual const char* what() const throw();
	};
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj);

#endif //CPP_STUDY_BUREAUCRAT_HPP
