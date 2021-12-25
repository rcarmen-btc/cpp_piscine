#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class Weapon {

	std::string type;
public:
	Weapon(std::string type);
	std::string const &getType( void ) const;
	void setType( std::string a_type );
};

#endif