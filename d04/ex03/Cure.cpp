#include "Cure.hpp"

Cure::Cure(): AMateria("cure") { }

Cure::~Cure() { }

Cure::Cure(std::string const &type): AMateria(type) { }

Cure &Cure::operator=(const Cure &c) {

	type = c.getType();
	return *this;
}

AMateria *Cure::clone() const {

	return new Cure(type);
}

void Cure::use(ICharacter& target) {

	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}