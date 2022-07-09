#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name("Default"), hitpoints(0), energy_points(0), attack_damage(0) {

	std::cout << "ClapTrap " << name << "`s default constructor" << std::endl;
}

ClapTrap::~ClapTrap() {

	std::cout << "ClapTrap " << name << "'s destructor" << std::endl;
}

ClapTrap::ClapTrap(std::string name): name(name) {

	std::cout << "ClapTrap " << name << "'s constructor" << std::endl;
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

	if (energy_points != 0) {
		energy_points--;
		std::cout << "ClapTrap " << name << " attack " << target << ", causing " << attack_damage << " points of damage!" << " (" << attack_damage << " --->)" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {

	int diff = hitpoints - amount;
	if (diff >= 0) {
		hitpoints -= amount;
		std::cout << "ClapTrap " << name << " take " << amount << " points of damage! " << "(-" << amount << ")" << std::endl;
	}
	else
		hitpoints -= amount + diff;
}

void ClapTrap::beRepaired(unsigned int amount) {

	if (energy_points != 0) {
		hitpoints += amount;
		energy_points--;
		std::cout << "ClapTrap " << name << " has been repaired of " << amount <<  " points " << "(+" << amount << ")" << std::endl;
	}
}

std::string ClapTrap::getName() const { return name; }

void ClapTrap::setName(std::string aname) { name = aname; }

int ClapTrap::getHP() const { return hitpoints; }
	
int ClapTrap::getEP() const { return energy_points; }
	
int ClapTrap::getAD() const { return attack_damage; }

void ClapTrap::setHP(int hp) { hitpoints = hp; }

void ClapTrap::setEP(int ep) { energy_points = ep; }

void ClapTrap::setAD(int ad) { attack_damage = ad; }

