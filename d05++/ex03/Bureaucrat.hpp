#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <stdexcept>
# include "Form.hpp"

# define HIGHEST_GRADE 1
# define LOWEST_GRADE 150

class Form;

class Bureaucrat {
	
	const std::string name;
	int grade;

public:
	class GradeTooHighException: public std::exception {
	public:
		const char* what(void) const throw();
	};
	
	class GradeTooLowException: public std::exception {
	public:
		const char* what(void) const throw();
	};

	Bureaucrat();
	~Bureaucrat();
	Bureaucrat(std::string aname, int agrade);
	Bureaucrat(const Bureaucrat &b);
	Bureaucrat &operator=(const Bureaucrat &b);
	Bureaucrat &operator++();
	Bureaucrat &operator--();
	void upGrade();
	void downGrade();
	std::string getName() const;
	int getGrade() const;
	void signForm(Form &f);
	void executeForm(Form const & form);
};

std::ostream &operator<<(std::ostream &out, Bureaucrat &b);

#endif
