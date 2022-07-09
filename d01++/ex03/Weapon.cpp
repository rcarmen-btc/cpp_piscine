#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type) {

	return;
}

void Weapon::setType( std::string a_type ) {

	type = a_type;
	return;
}

std::string const &Weapon::getType( void ) const {

	return type;
}
