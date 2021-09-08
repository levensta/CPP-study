//
// Created by Lorent Evenstar on 8/21/21.
//

#include "Form.hpp"

Form::GradeTooLowException::GradeTooLowException() : std::exception() {}

Form::GradeTooHighException::GradeTooHighException() : std::exception() {}

Form::SignatureException::SignatureException() : std::exception() {}

Form::GradeTooLowException::~GradeTooLowException() throw() {}

Form::GradeTooHighException::~GradeTooHighException() throw() {}

Form::SignatureException::~SignatureException() throw() {}

const char *Form::GradeTooLowException::what() const throw() {
	return "grade required to sign it, is too low";
}

const char *Form::GradeTooHighException::what() const throw() {
	return "grade required to sign it, is too high";
}

const char *Form::SignatureException::what() const throw() {
	return "signature is missing";
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : \
_name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
	if (gradeToSign < 1 || gradeToExecute < 1) {
		throw Form::GradeTooHighException();
	}
	else if (gradeToSign > 150 || gradeToExecute > 150) {
		throw Form::GradeTooLowException();
	}
};

Form::Form(std::string name, std::string target, int gradeToSign, int gradeToExecute) : \
_name(name), _target(target), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
if (gradeToSign < 1 || gradeToExecute < 1) {
	throw Form::GradeTooHighException();
}
else if (gradeToSign > 150 || gradeToExecute > 150) {
	throw Form::GradeTooLowException();
}
};

Form::~Form() {};

Form::Form(const Form &copy) : _name(copy._name), _target(copy._target), _isSigned(copy._isSigned), \
_gradeToSign(copy._gradeToSign), _gradeToExecute(copy._gradeToExecute) {}

//Form &Form::operator=(const Form &copy)  {
//	if (this != &copy) {
//		this->_isSigned = copy.getSignatureStatus();
//	}
//	return *this;
//}

const std::string Form::getName() const {
	return this->_name;
}

const std::string Form::getTarget() const {
	return this->_target;
}

const bool Form::getSignatureStatus() const {
	return this->_isSigned;
}

const int Form::getGradeSign() const {
	return this->_gradeToSign;
}

const int Form::getGradeExecute() const {
	return this->_gradeToExecute;
}

void Form::execute(const Bureaucrat &executor) const {
	if (this->_isSigned == false) {
		throw Form::SignatureException();
	}
	if (executor.getGrade() > this->_gradeToExecute) {
		throw Form::GradeTooLowException();
	}
}

void Form::beSigned(Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() <= this->_gradeToSign) {
		if (this->_isSigned == true) {
			throw std::string("the form has already been signed");
		}
		else {
			this->_isSigned = true;
		}
	}
	else {
		throw Form::GradeTooLowException();
	}
}

std::ostream &operator<<(std::ostream &os, const Form &obj) {
	os << "THE STATE OF THE FORM.\nName: " << obj.getName() << "\nSignature status: " << obj.getSignatureStatus() << \
	"\nGrade required to sign it: " << obj.getGradeSign() << "\nGrade required to execute it: " << obj.getGradeExecute() << "\n";
	return os;
}