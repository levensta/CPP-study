//
// Created by Lorent Evenstar on 8/21/21.
//

#ifndef CPP_STUDY_FORM_HPP
#define CPP_STUDY_FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

private:
	const std::string _name;
	const std::string _target;
	bool		_isSigned;
	const int 	_gradeToSign;
	const int 	_gradeToExecute;
	Form();

public:
	Form(std::string name, int gradeToSign, int gradeToExecute);
	Form(std::string name, std::string target, int gradeToSign, int gradeToExecute);
	virtual ~Form();
	Form(const Form &copy);
	Form &operator=(const Form &copy);

	void beSigned(Bureaucrat &bureaucrat);
	const std::string getName() const;
	const std::string getTarget() const;
	virtual void action() const = 0;
	const bool getSignatureStatus() const;
	const int getGradeSign() const;
	const int getGradeExecute() const;
	virtual void execute(const Bureaucrat &executor) const;

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

	class	SignatureException : public std::exception {
	public:
		SignatureException();
		virtual ~SignatureException() throw ();
		virtual const char* what() const throw();
	};

};

std::ostream &operator<<(std::ostream &os, const Form &form);

#endif //CPP_STUDY_FORM_HPP
