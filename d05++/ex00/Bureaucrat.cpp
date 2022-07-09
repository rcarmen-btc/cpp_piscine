#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("default_name"), grade(LOWEST_GRADE) { }

Bureaucrat::~Bureaucrat() { }

Bureaucrat::Bureaucrat(std::string aname, int agrade): name(aname), grade(agrade) {

	if (agrade < HIGHEST_GRADE)
		throw Bureaucrat::GradeTooHighException();
	else if (agrade > LOWEST_GRADE)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &b): name(b.name), grade(b.grade) { }

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &b) {

	grade = b.grade;
	return *this;
}

Bureaucrat &Bureaucrat::operator++() {

	if (grade - 1 < HIGHEST_GRADE)
		throw Bureaucrat::GradeTooHighException();
	--grade;
	return *this;
}

Bureaucrat &Bureaucrat::operator--() {

	if (grade + 1 > LOWEST_GRADE)
		throw Bureaucrat::GradeTooLowException();
	++grade;
	return *this;
}

std::ostream &operator<<(std::ostream &out, Bureaucrat &b) {

	out << b.getName() << ", bureaucrat grade " <<  b.getGrade();
	return out;
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw() {
	return "Exception caught: The grade specified in the bureaucrat parameters is too high";
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw() {
	return "Exception caught: The grade specified in the bureaucrat parameters is too low";
}

void Bureaucrat::upGrade() { ++*this; }

void Bureaucrat::downGrade() { --*this; }

std::string Bureaucrat::getName() { return name; }

int Bureaucrat::getGrade() { return grade; }
