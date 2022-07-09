#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(): Form("Robotomy form", LOWEST_GRADE, LOWEST_GRADE), target("unnamed_target") { }

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("Robotomy form", 72, 45), target(target) { }

RobotomyRequestForm::~RobotomyRequestForm() { };

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &sh): Form(sh.getName(), sh.getGradeToSing(), sh.getGradeToExecute()), target(sh.target) { }

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &sh) {

	target = sh.target;
	return *this;
}

std::string RobotomyRequestForm::getTarget() const { return target; }

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {

	if (getSignedStatus() == NOT_SIGNED)
		throw RobotomyRequestForm::FormIsNotSignedException();
	if (executor.getGrade() > getGradeToExecute())
		throw RobotomyRequestForm::GradeTooLowException();
	std::cout << executor.getName() << " executes " << getName() << std::endl;
	std::srand(time(NULL));
	bool tf = rand() % 2; 
	std::cout << "ZZZ!!! ZZZ!!! ZZZ!!!" << std::endl;
	if (tf)
		std::cout << getTarget() << " has been robotomized successfully" << std::endl;
	else
		std::cout << getTarget() << " has not been robotomized" << std::endl;

}