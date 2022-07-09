#ifndef INTERN_HPP
# define INTERN_HPP
# include <iostream>
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"


class Intern {

public:

	class FormNotFoundException: public std::exception {
	public:
		const char* what(void) const throw();
	};

	Intern();
	~Intern();
	Intern(Intern &i);
	Intern &operator=(Intern &i);
	Form *makeForm(std::string name, std::string target); 

};

#endif
