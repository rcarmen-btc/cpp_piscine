#include "AMateria.hpp"

AMateria::AMateria(): type("default_type") { }

AMateria::~AMateria() { }

AMateria::AMateria(std::string const &type): type(type) { }

AMateria &AMateria::operator=(const AMateria &m) {

	if (this == &m)
		return *this;
	type = m.type;
	return *this;
}

std::string const &AMateria::getType() const { return type; }

void AMateria::setType(std::string atype){ type = atype; }

void AMateria::use(ICharacter& target) {

	(void)target;
}