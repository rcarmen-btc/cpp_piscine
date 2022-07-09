#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include "Form.hpp"
# include <fstream>

class PresidentialPardonForm: public Form {
		
	std::string target;
public:

	PresidentialPardonForm();
	~PresidentialPardonForm();
	PresidentialPardonForm(PresidentialPardonForm &sh);
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &sh);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &sh);
	virtual void execute(Bureaucrat const & executor) const;
	std::string getTarget() const;
};

#endif