#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

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
	st.guardGate();

	std::cout << std::endl;
	std::cout << "FRAGTRAP:" << std::endl;
	FragTrap ft("Allie");
	std::cout << "HP: " << ft.getHP() << std::endl;
	std::cout << "EP: " << ft.getEP() << std::endl;
	std::cout << "AD: " << ft.getAD() << std::endl;
	std::cout << std::endl;
	ft.highFivesGuys();

	std::cout << std::endl;
	std::cout << "DIAMONDTRAP:" << std::endl;
	DiamondTrap dt("Mary");
	std::cout << "HP: " << dt.getHP() << std::endl;
	std::cout << "EP: " << dt.getEP() << std::endl;
	std::cout << "AD: " << dt.getAD() << std::endl;
	dt.whoAmI();
	std::cout << std::endl;
	
	
	return 0;
}