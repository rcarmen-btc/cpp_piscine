#ifndef ICE_HPP
# define ICE_HPP
# include <iostream>
# include "AMateria.hpp"

class Ice: public AMateria {

public:
	Ice();
	~Ice();
	Ice(std::string const & type);
	Ice &operator=(const Ice &m);
	AMateria* clone() const;
	virtual void use(ICharacter& target);
};

#endif