#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), wB(NULL) {
	
	return;
}

void HumanB::setWeapon(Weapon &a_wB) {

	wB = &a_wB;
	return;
}

void HumanB::attack( void ) const {

	if (wB != NULL)	
		std::cout << name << " attacks with his " << wB->getType() << std::endl;
	else
		std::cout << name << " can't attack." << std::endl;
	return;
}
