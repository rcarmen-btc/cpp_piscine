#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie {

	std::string name;
public:
	void announce( void );
	Zombie();
	Zombie(std::string name);
	void set_name(std::string name);

	~Zombie();
};

Zombie* zombieHorde( int N, std::string name );

#endif