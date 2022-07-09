#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap() {

	std::cout << "ScavTrap " << getName() << "`s default constructor" << std::endl;
	setHP(100);
	setEP(50);
	setAD(20);
}

ScavTrap::~ScavTrap() {

	std::cout << "ScavTrap " << getName() << "'s destructor" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name) {

	std::cout << "ScavTrap " << name << "`s constructor" << std::endl;
	setHP(100);
	setEP(50);
	setAD(20);
}

ScavTrap::ScavTrap(const ScavTrap &s): ClapTrap() {

	std::cout << "ScavTrap " << getName() << "'s constructor" << std::endl;
	*this = s;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &s) {

	setName(s.getName());
	setHP(s.getHP());
	setEP(s.getEP());
	setAD(s.getAD());
	std::cout << getName() << "'s assignation operator" << std::endl;
	return *this;
}

void ScavTrap::guardGate() {
	
	std::cout << "ScavTrap " << getName() << " have enterred in Gate keeper mode." << std::endl;
}