#ifndef CURE_HPP
# define CURE_HPP
# include <iostream>
# include "AMateria.hpp"

class Cure: public AMateria {

public:
	Cure();
	~Cure();
	Cure(std::string const & type);
	Cure &operator=(const Cure &m);
	AMateria* clone() const;
	virtual void use(ICharacter& target);
};

#endif
