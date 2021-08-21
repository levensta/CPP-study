//
// Created by Lorent Evenstar on 8/21/21.
//

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int		main() {
	srand(time(NULL));
	Bureaucrat	nick("Nick", 150);
	Bureaucrat	tom("Tom", 1);
	std::cout << "-----------------------------------------------------------------------------------------------------------------------|----" << std::endl;
	{
		ShrubberyCreationForm	form("Home");

		std::cout << "\033[1;33m" << nick << "\n\033[0m" << "\033[1;33m" << tom << "\n\033[0m\033[1;35m" << form << "\033[0m" <<std::endl <<std::endl;
		std::cout << "\033[1;34m";
		nick.executeForm(form);
		tom.executeForm(form);
		std::cout << "\033[0m" <<std::endl;
		std::cout << "\033[1;33m" << nick << "\n\033[0m" << "\033[1;33m" << tom << "\n\033[0m\033[1;35m" << form << "\033[0m" <<std::endl <<std::endl;
		std::cout << "\033[1;34m";
		nick.signForm(form);
		tom.signForm(form);
		std::cout << "\033[0m" <<std::endl;
		std::cout << "\033[1;33m" << nick << "\n\033[0m" << "\033[1;33m" << tom << "\n\033[0m\033[1;35m" << form << "\033[0m" <<std::endl <<std::endl;
		std::cout << "\033[1;34m";
		nick.executeForm(form);
		tom.executeForm(form);
		std::cout << "\033[0m";
	}
	std::cout << "-----------------------------------------------------------------------------------------------------------------------|----" << std::endl;
	{
		RobotomyRequestForm	form("Home");

		std::cout << "\033[1;33m" << nick << "\n\033[0m" << "\033[1;33m" << tom << "\n\033[0m\033[1;35m" << form << "\033[0m" <<std::endl <<std::endl;
		std::cout << "\033[1;34m";
		nick.executeForm(form);
		tom.executeForm(form);
		std::cout << "\033[0m" <<std::endl;
		std::cout << "\033[1;33m" << nick << "\n\033[0m" << "\033[1;33m" << tom << "\n\033[0m\033[1;35m" << form << "\033[0m" <<std::endl <<std::endl;
		std::cout << "\033[1;34m";
		nick.signForm(form);
		tom.signForm(form);
		std::cout << "\033[0m" <<std::endl;
		std::cout << "\033[1;33m" << nick << "\n\033[0m" << "\033[1;33m" << tom << "\n\033[0m\033[1;35m" << form << "\033[0m" <<std::endl <<std::endl;
		std::cout << "\033[1;34m";
		nick.executeForm(form);
		tom.executeForm(form);
		std::cout << "\033[0m" <<std::endl;
		std::cout << "\033[1;34m";
		nick.executeForm(form);
		tom.executeForm(form);
		std::cout << "\033[0m" <<std::endl;
		std::cout << "\033[1;34m";
		nick.executeForm(form);
		tom.executeForm(form);
		std::cout << "\033[0m" <<std::endl;
		std::cout << "\033[1;34m";
		nick.executeForm(form);
		tom.executeForm(form);
		std::cout << "\033[0m";
	}
	std::cout << "-----------------------------------------------------------------------------------------------------------------------|----" << std::endl;
	{
		PresidentialPardonForm	form("Home");

		std::cout << "\033[1;33m" << nick << "\n\033[0m" << "\033[1;33m" << tom << "\n\033[0m\033[1;35m" << form << "\033[0m" <<std::endl <<std::endl;
		std::cout << "\033[1;34m";
		nick.executeForm(form);
		tom.executeForm(form);
		std::cout << "\033[0m" <<std::endl;
		std::cout << "\033[1;33m" << nick << "\n\033[0m" << "\033[1;33m" << tom << "\n\033[0m\033[1;35m" << form << "\033[0m" <<std::endl <<std::endl;
		std::cout << "\033[1;34m";
		nick.signForm(form);
		tom.signForm(form);
		std::cout << "\033[0m" <<std::endl;
		std::cout << "\033[1;33m" << nick << "\n\033[0m" << "\033[1;33m" << tom << "\n\033[0m\033[1;35m" << form << "\033[0m" <<std::endl <<std::endl;
		std::cout << "\033[1;34m";
		nick.executeForm(form);
		tom.executeForm(form);
		std::cout << "\033[0m";
	}
	std::cout << "-----------------------------------------------------------------------------------------------------------------------|----" << std::endl;
	return (0);
}