#include "Weapon.hpp"

class HumanB {

	std::string name;
	Weapon *wB;
public:
	HumanB(std::string name);
	void attack( void ) const; 
	void setWeapon(Weapon &a_wB);
};
