#include "Intern.hpp"

Intern::Intern() { }

Intern::~Intern() { }

Intern::Intern(Intern &i) { (void)i; }

Intern &Intern::operator=(Intern &i) { (void)i; return *this; }

Form *Intern::makeForm(std::string name, std::string target) {

	PresidentialPardonForm *pf = new PresidentialPardonForm(target);
	RobotomyRequestForm *rf = new RobotomyRequestForm(target);
	ShrubberyCreationForm *sf = new ShrubberyCreationForm(target);
	Form *f[3];
	f[0] = pf;
	f[1] = rf;
	f[2] = sf;

	Form *res = NULL;
	for (int i = 0; i < 3; i++) {
		if (name == f[i]->getName()) {
			res = f[i];
			for (int j = 0; j < 3; j++) {
				if (j != i)
					delete f[j];
			}
			std::cout << "Intern creates " << name << std::endl;
			return res;
		}
	}
	for (int j = 0; j < 3; j++) {
		delete f[j];
	}
	throw Intern::FormNotFoundException(); 
}

const char* Intern::FormNotFoundException::what(void) const throw() {
	return "[Intern] Exception caught: Form not found";
}
