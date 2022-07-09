#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main( void ) {

	std::cout << std::endl;
{
	try {
		std::cout << "\\\\\\\\\\\\\\\\\\\\Tests 1\\\\\\\\\\\\\\\\\\\\" << std::endl;

		std::cout << std::endl;
		Bureaucrat b1("Sam", 1);
		std::cout << b1 << std::endl;

		ShrubberyCreationForm sf("home");
		std::cout << sf << std::endl;
		std::cout << "Target: ";
		std::cout << sf.getTarget() << std::endl;
		b1.signForm(sf);
		b1.executeForm(sf);

		RobotomyRequestForm rf("hand");
		std::cout << rf << std::endl;
		std::cout << "Target: ";
		std::cout << rf.getTarget() << std::endl;
		b1.signForm(rf);
		b1.executeForm(rf);

		PresidentialPardonForm pf("Sammy");
		std::cout << pf << std::endl;
		std::cout << "Target: ";
		std::cout << pf.getTarget() << std::endl;
		b1.signForm(pf);
		b1.executeForm(pf);

	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}
{
	try {
		std::cout << "\\\\\\\\\\\\\\\\\\\\Tests 2\\\\\\\\\\\\\\\\\\\\" << std::endl;

		std::cout << std::endl;
		 Bureaucrat b1("Sam", 72);
		std::cout << b1 << std::endl;

		ShrubberyCreationForm sf("lama");
		std::cout << sf << std::endl;
		std::cout << "Target: ";
		std::cout << sf.getTarget() << std::endl;
		b1.signForm(sf);
		b1.executeForm(sf);

		RobotomyRequestForm rf("hand");
		std::cout << rf << std::endl;
		std::cout << "Target: ";
		std::cout << rf.getTarget() << std::endl;
		b1.signForm(rf);
		b1.executeForm(rf);

		PresidentialPardonForm pf("Sammy");
		std::cout << pf << std::endl;
		std::cout << "Target: ";
		std::cout << pf.getTarget() << std::endl;
		b1.signForm(pf);
		b1.executeForm(pf);

	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}
	return 0;
}