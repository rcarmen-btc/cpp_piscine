#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("Presidential form", LOWEST_GRADE, LOWEST_GRADE), target("unnamed_target") { }

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("Presidential form", 25, 5), target(target) { }

PresidentialPardonForm::~PresidentialPardonForm() { };

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &sh): Form(sh.getName(), sh.getGradeToSing(), sh.getGradeToExecute()), target(sh.target) { }

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &sh) {

	target = sh.target;
	return *this;
}

std::string PresidentialPardonForm::getTarget() const { return target; }

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {

	if (getSignedStatus() == NOT_SIGNED)
		throw PresidentialPardonForm::FormIsNotSignedException();
	if (executor.getGrade() > getGradeToExecute())
		throw PresidentialPardonForm::GradeTooLowException();
	std::cout << executor.getName() << " executes " << getName() << std::endl;
	std::cout << getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}