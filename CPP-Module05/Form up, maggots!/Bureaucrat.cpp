//
// Created by Lorent Evenstar on 8/20/21.
//

#include "Bureaucrat.hpp"

class Form;

Bureaucrat::GradeTooLowException::GradeTooLowException() : std::exception() {};

Bureaucrat::GradeTooHighException::GradeTooHighException() : std::exception() {};

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade is too low";
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade is too high";
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
	if (grade < 1) {
		throw Bureaucrat::GradeTooHighException();
	}
	else if (grade > 150) {
		throw Bureaucrat::GradeTooLowException();
	}
}

Bureaucrat::~Bureaucrat() {};

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy.getName()) {
	*this = copy;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy) {
	if (this != &copy) {
		this->_grade = copy.getGrade();
	}
	return *this;
}

const std::string Bureaucrat::getName() const {
	return this->_name;
}

int Bureaucrat::getGrade() const {
	return this->_grade;
}

void Bureaucrat::incrementGrade(int n) {
	this->_grade -= n;
	if (this->_grade < 1) {
		throw Bureaucrat::GradeTooHighException();
	}
}

void Bureaucrat::decrementGrade(int n) {
	this->_grade += n;
	if (this->_grade > 150) {
		throw Bureaucrat::GradeTooLowException();
	}
}

void Bureaucrat::signForm(Form &form) {
	try {
		form.beSigned(*this);
		std::cout << this->getName() << " signs " << form.getName() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << this->getName() << " cannot sign " << form.getName() << " because " << e.what();
	}
	catch (std::string reasonAlreadySigned) {
		std::cout << this->getName() << " cannot sign " << form.getName() << " because " << reasonAlreadySigned;
	}
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj) {
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << "\n";
	return os;
}