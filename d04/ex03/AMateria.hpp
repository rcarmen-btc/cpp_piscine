#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>
# include "ICharacter.hpp"

class AMateria {
	
protected:
	std::string type;
public:
	AMateria();
	virtual ~AMateria();
	AMateria(std::string const & type);
	AMateria &operator=(const AMateria &m);
	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target) = 0;
	void setType(std::string atype);
};
#endif