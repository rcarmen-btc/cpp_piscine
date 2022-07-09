#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &wA) : name(name), wA(wA) {

	return;
}

void HumanA::attack( void ) const {

	std::cout << name << " attacks with his " << wA.getType() << std::endl;
	return;
}
