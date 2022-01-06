#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {

	setName("Default");
	std::cout << "ScavTrap " << getName() << "`s default constructor" << std::endl;
	setHP(100);
	setEP(50);
	setAD(20);
}

ScavTrap::~ScavTrap() {

	std::cout << "ScavTrap " << getName() << "'s destructor" << std::endl;
}

ScavTrap::ScavTrap(std::string name) {

	setName(name);
	std::cout << "ScavTrap " << name << "`s constructor" << std::endl;
	setHP(100);
	setEP(50);
	setAD(20);
}

ScavTrap::ScavTrap(const ScavTrap &s) {

	std::cout << "ScavTrap " << getName() << "'s constructor" << std::endl;
	*this = s;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &s) {

	setName(s.getName());
	setHP(s.getHP());
	setEP(s.getEP());
	setAD(s.getAD());
	return *this;
}

void ScavTrap::attack(std::string const & target) {
	
	std::cout << "ScavTrap " << getName() << " attack " << target << ", causing " << getAD() << " points of damage!" << " (" << getAD() << " --->)" << std::endl;
}

void ScavTrap::guardGate() {
	
	std::cout << "ScavTrap " << getName() << " have enterred in Gate keeper mode." << std::endl;
}