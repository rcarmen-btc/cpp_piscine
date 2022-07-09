#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ScavTrap(), FragTrap() {

	std::cout << "DiamondTrap " << getName() << "`s default constructor" << std::endl;
	setHP(FragTrap::getHP());
	setEP(FragTrap::getEP());
	setAD(FragTrap::getAD());
}

DiamondTrap::~DiamondTrap() {
	
	std::cout << "DiamondTrap " << getName() << "'s destructor" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &d):  ClapTrap(), ScavTrap(), FragTrap() {

	*this = d;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_trap"), ScavTrap(name), FragTrap(name), name(name) {

	std::cout << "DiamondTrap " << name << "`s constructor" << std::endl;
	setHP(FragTrap::getHP());
	setEP(FragTrap::getEP());
	setAD(FragTrap::getAD());
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