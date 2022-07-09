#include "Ice.hpp"

Ice::Ice(): AMateria("ice") { }

Ice::~Ice() { }

Ice::Ice(std::string const &type): AMateria(type) { }

Ice &Ice::operator=(const Ice &c) {

	type = c.getType();
	return *this;
}

AMateria *Ice::clone() const {

	return new Ice(type);
}

void Ice::use(ICharacter& target) {

	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}