
#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <stdexcept>

# define HIGHEST_GRADE 1
# define LOWEST_GRADE 150

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
	std::string getName();
	int getGrade();
};

std::ostream &operator<<(std::ostream &out, Bureaucrat &b);

#endif
