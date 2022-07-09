#include "ClapTrap.hpp"

int main( void ) {

	std::cout << std::endl;
	ClapTrap ct("Ben");
	std::cout << "HP: " << ct.getHP() << std::endl;
	std::cout << "EP: " << ct.getEP() << std::endl;
	std::cout << "AD: " << ct.getAD() << std::endl;
	ct.attack("Max");
	ct.takeDamage(7);
	std::cout << "HP: " << ct.getHP() << std::endl;
	std::cout << "EP: " << ct.getEP() << std::endl;
	std::cout << "AD: " << ct.getAD() << std::endl;
	ct.beRepaired(2);
	std::cout << "HP: " << ct.getHP() << std::endl;
	std::cout << "EP: " << ct.getEP() << std::endl;
	std::cout << "AD: " << ct.getAD() << std::endl;
	return 0;
}