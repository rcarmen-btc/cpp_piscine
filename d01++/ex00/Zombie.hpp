#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie {

	std::string name;

public:

	Zombie(std::string a_name);
	~Zombie();
	void announce( void );

};

#endif