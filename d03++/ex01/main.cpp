#include "ScavTrap.hpp"

int main( void ) {

	std::cout << std::endl;
	std::cout << "CLAPTRAP:" << std::endl;
	ClapTrap ct("Ben");
	std::cout << "HP: " << ct.getHP() << std::endl;
	std::cout << "EP: " << ct.getEP() << std::endl;
	std::cout << "AD: " << ct.getAD() << std::endl;
	ct.attack("Max");
	ct.takeDamage(7);
	ct.beRepaired(2);
	std::cout << "HP: " << ct.getHP() << std::endl;
	std::cout << "EP: " << ct.getEP() << std::endl;
	std::cout << "AD: " << ct.getAD() << std::endl;

	std::cout << std::endl;
	std::cout << "SCAVTRAP:" << std::endl;
	ScavTrap st("Nick");
	std::cout << "HP: " << st.getHP() << std::endl;
	std::cout << "EP: " << st.getEP() << std::endl;
	std::cout << "AD: " << st.getAD() << std::endl;
	st.attack("Max");
	st.takeDamage(10);
	st.beRepaired(1);
	st.guardGate();
	std::cout << "HP: " << st.getHP() << std::endl;
	std::cout << "EP: " << st.getEP() << std::endl;
	std::cout << "AD: " << st.getAD() << std::endl;
	return 0;
}