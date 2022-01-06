#include "ScavTrap.hpp"

int main( void ) {

	std::cout << std::endl;
	std::cout << "CLAPTRAP:" << std::endl;
	ClapTrap ct("Ben");
	std::cout << "HP: " << ct.getHP() << std::endl;
	std::cout << "EP: " << ct.getEP() << std::endl;
	std::cout << "AD: " << ct.getAD() << std::endl;
	ct.attack("Max");
	ct.beRepaired(19);
	ct.takeDamage(21);

	std::cout << std::endl;
	std::cout << "SCAVTRAP:" << std::endl;
	ScavTrap st("Nick");
	std::cout << "HP: " << st.getHP() << std::endl;
	std::cout << "EP: " << st.getEP() << std::endl;
	std::cout << "AD: " << st.getAD() << std::endl;
	st.takeDamage(10);
	st.guardGate();
	return 0;
}