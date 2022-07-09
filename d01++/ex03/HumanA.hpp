#include "Weapon.hpp"

class HumanA {

	std::string name;
	Weapon &wA;

public:

	HumanA(std::string name, Weapon &wA);
	void attack( void ) const; 
};