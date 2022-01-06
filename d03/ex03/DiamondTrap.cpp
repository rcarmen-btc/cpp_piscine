#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {

	setName("Default");
	std::cout << "DiamondTrap " << getName() << "`s default constructor" << std::endl;
	setHP(100);
	setEP(50);
	setAD(20);
}

DiamondTrap::~DiamondTrap() {
	
	std::cout << "DiamondTrap " << getName() << "'s destructor" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &d) {

	*this = d;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_trap"), name(name) {

	std::cout << "DiamondTrap " << name << "`s constructor" << std::endl;
	setHP(100);
	setEP(50);
	setAD(30);
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &d) {

	setName(d.getName());
	setHP(d.getHP());
	setEP(d.getEP());
	setAD(d.getAD());
	return *this;
}

void DiamondTrap::attack(std::string const & target) {

	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {

	std::cout << "DiamondTrap " << "name: " << name << ". ClapTrap name: " << ClapTrap::getName() << std::endl;
}