#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap: public ClapTrap {

public:
	FragTrap();
	~FragTrap();
	FragTrap(const FragTrap &f);
	FragTrap(std::string name);

	FragTrap &operator=(const FragTrap &f);

	void highFivesGuys();
};

#endif