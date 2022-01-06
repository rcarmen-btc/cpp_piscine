#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap {

	std::string name;
	int hitpoints;
	int energy_points;
	int attack_damage;
public:
	ClapTrap();
	ClapTrap(std::string name);
	~ClapTrap();
	ClapTrap(const ClapTrap &c);
	ClapTrap &operator=(const ClapTrap &p);
	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	int getHP();
	int getEP();
	int getAD();
};

#endif