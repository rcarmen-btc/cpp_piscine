#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap {

	std::string name;
public:
	DiamondTrap();
	~DiamondTrap();
	DiamondTrap(const DiamondTrap &d);
	DiamondTrap(std::string name);
	DiamondTrap &operator=(const DiamondTrap &d);
	void attack(std::string const & target);
	void whoAmI();
};
#endif