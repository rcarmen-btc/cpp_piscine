#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main( void ) {

	std::cout << std::endl;

		Form		*s_form = NULL; 
		Form		*r_form = NULL; 
		Form		*p_form = NULL; 
		Intern		intern;
	try 
	{
		s_form = intern.makeForm("Shrubbery fo rm", "TREES");
		r_form = intern.makeForm("Robotomy form", "Robocop");
		p_form = intern.makeForm("Presidential form", "Elon Musk");

		if (!s_form || !p_form || !r_form)
		{
			if (s_form)
				delete s_form;
			if (p_form)
				delete p_form;
			if (r_form)
				delete r_form;
			std::cout << "Allocation Error : Program shutdown" << std::endl;
			return 1;
		}

		Bureaucrat vog("vog", 100); 

		std::cout << "\t ***********SHRUBB_TESTER************** \t"<< std::endl << std::endl;
		std::cout << vog << std::endl;
		std::cout << *s_form << std::endl;
		
		std::cout << std::endl;
		vog.signForm(*s_form); // Sign

		std::cout << *s_form << std::endl;
		
		std::cout << std::endl;
		vog.executeForm(*s_form); // Execute

		
		std::cout << std::endl  <<"\t ***********ROBOT_TESTER************** \t"<< std::endl << std::endl;
		std::cout << *r_form << std::endl;
		
		std::cout << std::endl;
		vog.signForm(*r_form);
		
		std::cout << *r_form << std::endl;
		
		std::cout << std::endl;
		vog.executeForm(*r_form);
		
		std::cout << std::endl << "\t ***********PRESIDENTIAL_TESTER************** \t"<< std::endl << std::endl;
		std::cout << *p_form << std::endl;
	
		std::cout << std::endl;
		vog.signForm(*p_form);
		
		std::cout << *p_form << std::endl;
		
		std::cout << std::endl;
		vog.executeForm(*p_form);

		delete s_form;
		delete r_form;
		delete p_form;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}