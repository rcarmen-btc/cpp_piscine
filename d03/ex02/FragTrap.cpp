#include "FragTrap.hpp"

FragTrap::FragTrap() {

	setName("Default");
	std::cout << "ScavTrap " << getName() << "`s default constructor" << std::endl;
	setHP(100);
	setEP(50);
	setAD(20);
}

FragTrap::~FragTrap() {

	std::cout << "FragTrap " << getName() << "'s destructor" << std::endl;
}

FragTrap::FragTrap(std::string name) {

	setName(name);
	std::cout << "FragTrap " << name << "`s constructor" << std::endl;
	setHP(100);
	setEP(100);
	setAD(30);
}

FragTrap::FragTrap(const FragTrap &f) {

	std::cout << "FragTrap " << getName() << "'s constructor" << std::endl;
	*this = f;
}

FragTrap &FragTrap::operator=(const FragTrap &f) {

	setName(f.getName());
	setHP(f.getHP());
	setEP(f.getEP());
	setAD(f.getAD());
	return *this;
}

void FragTrap::highFivesGuys() {

	std::cout << "FragTrap " << getName() << " wants to give you a high five!" << std::endl;
}
