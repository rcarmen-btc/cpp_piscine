#ifndef FORM_HPP
# define FORM_HPP
#include <iostream>
#include "Bureaucrat.hpp"

#define NOT_SIGNED 0
#define SIGNED 1

class Bureaucrat;

class Form {
	
	const std::string name;
	const int grade_to_sgin, grade_to_execute;
	bool is_signed;

public:

	class GradeTooHighException: public std::exception {
	public:
		const char* what(void) const throw();
	};
	
	class GradeTooLowException: public std::exception {
	public:
		const char* what() const throw();
	};

	Form();
	~Form();
	Form(const Form &b);
	Form(std::string aname, int agrade_to_sign, int agrade_to_execute);
	Form &operator=(const Form &b);
	std::string getName();
	int getGradeToSing();
	int getGradeToExecute();
	bool getSignedStatus();
	void beSigned(Bureaucrat &b);
};

std::ostream &operator<<(std::ostream &out, Form &b);

#endif
