#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm: public Form {
		
	std::string target;
public:

	ShrubberyCreationForm();
	~ShrubberyCreationForm();
	ShrubberyCreationForm(ShrubberyCreationForm &sh);
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &sh);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &sh);
	virtual void execute(Bureaucrat const & executor) const;
	std::string getTarget() const;
};

#endif