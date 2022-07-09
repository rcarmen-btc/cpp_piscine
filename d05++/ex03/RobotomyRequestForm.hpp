#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "Form.hpp"
# include <fstream>

class RobotomyRequestForm: public Form {
		
	std::string target;
public:
	
	RobotomyRequestForm();
	~RobotomyRequestForm();
	RobotomyRequestForm(RobotomyRequestForm &sh);
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &sh);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &sh);
	virtual void execute(Bureaucrat const & executor) const;
	std::string getTarget() const;
};

#endif