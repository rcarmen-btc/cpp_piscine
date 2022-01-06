#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name("Default"), hitpoints(0), energy_points(0), attack_damage(0) {

	std::cout << name << "`s default constructor" << std::endl;
}

ClapTrap::~ClapTrap() {

	std::cout << name << "'s destructor" << std::endl;
}

ClapTrap::ClapTrap(std::string name): name(name) {

	std::cout << name << "'s constructor" << std::endl;
	hitpoints = 10;
	energy_points = 10;
	attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &c) {

	std::cout << "Copy constructor (copy " << c.name << " ClapTrap)" << std::endl;
	*this = c;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &p) {

	name = p.name;
	hitpoints = p.hitpoints;
	energy_points = p.energy_points;
	attack_damage = p.attack_damage;
	std::cout << name << "'s assignation operator" << std::endl;
	return *this;
}

void ClapTrap::attack(std::string const & target) {

	std::cout << "ClapTrap " << name << " attack " << target << ", causing " << attack_damage << " points of damage!" << " (" << attack_damage << " --->)" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {

	std::cout << "ClapTrap " << name << " take " << amount << " points of damage! " << "(-" << amount << ")" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {

	std::cout << "ClapTrap " << name << " has been repaired of " << amount <<  " points " << "(+" << amount << ")" << std::endl;
}

int ClapTrap::getHP() { return hitpoints; }
	
int ClapTrap::getEP() { return energy_points; }
	
int ClapTrap::getAD() { return attack_damage; }
