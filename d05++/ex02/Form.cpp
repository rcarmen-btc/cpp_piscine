#include "Bureaucrat.hpp"
#include "Form.hpp"

Form::Form(): name("default_name"), grade_to_sgin(LOWEST_GRADE), grade_to_execute(LOWEST_GRADE), is_signed(NOT_SIGNED) { }

Form::~Form() { }

Form::Form(const Form &f): name(f.name), grade_to_sgin(f.grade_to_sgin), grade_to_execute(f.grade_to_execute), is_signed(f.is_signed) {}

Form::Form(std::string aname, int agrade_to_sign, int agrade_to_execute): name(aname), grade_to_sgin(agrade_to_sign), grade_to_execute(agrade_to_execute), is_signed(false) {

	if (agrade_to_sign < HIGHEST_GRADE || agrade_to_execute < HIGHEST_GRADE)
		throw Form::GradeTooHighException();
	else if (agrade_to_sign > LOWEST_GRADE || agrade_to_execute > LOWEST_GRADE)
		throw Form::GradeTooLowException();
}

Form &Form::operator=(const Form &b) {

	is_signed = b.is_signed;
	return *this;
}

std::ostream &operator<<(std::ostream &out, Form &b) {

	std::cout << "===" << b.getName() << " Info===" << std::endl;
	std::cout << "Grade to sign: " << b.getGradeToSing() << std::endl;
	std::cout << "Grade to execute: " << b.getGradeToExecute() << std::endl;
	std::cout << "Sign status: ";
	if (b.getSignedStatus() == NOT_SIGNED)
		std::cout << "unsigned" << std::endl;
	else
		std::cout << "signed" << std::endl;
	return out;
}

void Form::beSigned(Bureaucrat &b) {

	if (b.getGrade() <= grade_to_sgin) {
		is_signed = true;
		std::cout << b.getName() << " signed " << getName() << std::endl;
	}
	else
		throw Form::GradeTooLowException();
}

const char* Form::GradeTooLowException::what() const throw() {
	return "[Form] Exception caught: The grade is too low";
}

const char* Form::FormIsNotSignedException::what(void) const throw() {
	return "[Form] Exception caught: The form is not signed yet";
}
const char* Form::GradeTooHighException::what(void) const throw() {
	return "[Form] Exception caught: The grade is too high";
}

std::string Form::getName() const { return name; }

int Form::getGradeToSing() const { return grade_to_sgin; }

int Form::getGradeToExecute() const { return grade_to_execute; }

bool Form::getSignedStatus() const { return is_signed; }

