#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Form("Shrubbery form", LOWEST_GRADE, LOWEST_GRADE), target("unnamed_target") { }

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("Shrubbery form", 145, 137), target(target) { }

ShrubberyCreationForm::~ShrubberyCreationForm() { };

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &sh): Form(sh.getName(), sh.getGradeToSing(), sh.getGradeToExecute()), target(sh.target) { }

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &sh) {

	target = sh.target;
	return *this;
}

std::string ShrubberyCreationForm::getTarget() const { return target; }

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {

	if (getSignedStatus() == 0)
		throw ShrubberyCreationForm::FormIsNotSignedException();
	if (executor.getGrade() > getGradeToExecute())
		throw ShrubberyCreationForm::GradeTooLowException();
	std::cout << executor.getName() << " executes " << getName() << std::endl;
	std::string s = getTarget();
	std::string s1 = "_shrubbery";
	std::string s2 = s + s1;
	std::ofstream outf(s2.c_str());
	if (!outf)
		throw "Uh oh, SomeText.txt could not be opened for writing!";
	outf << "                                    @" << std::endl;
	outf << "                              @ @ @  @ @ @" << std::endl;
	outf << "                            @  @\\/@ @ /__@" << std::endl;
	outf << "                            @@@ @\\ / @/  @ @" << std::endl;
	outf << "                           @\\  \\/@| @ | @" << std::endl;
	outf << "                          @__\\@ \\ |/ \\| / @" << std::endl;
	outf << "                             __\\|@|  ||/__/@" << std::endl;
	outf << "                            /  \\ \\  / /__" << std::endl;
	outf << "                           @    \\  \\/ /   @" << std::endl;
	outf << "                                 |\" \'|" << std::endl;
	outf << "                                 |\"  |" << std::endl;
	outf << "                                 |\"  |" << std::endl;
	outf << "                                ~|\"  |~" << std::endl;
	outf << "                            ~~~~       ~~~~" << std::endl;
	outf << "                          ~~               ~~~" << std::endl;
}