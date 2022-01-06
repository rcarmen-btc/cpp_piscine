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
	~ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &c);
	ClapTrap &operator=(const ClapTrap &p);
	std::string getName() const;
	void setName(std::string aname);
	int getHP() const;
	int getEP() const;
	int getAD() const;
	void setHP(int hp);
	void setEP(int ep);
	void setAD(int ad);
	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif