#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie {

	std::string name;
public:
	Zombie(std::string a_name);
	void announce( void );
	~Zombie();
};

void randomChump( std::string name );
Zombie* newZombie( std::string name );

#endif