#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name) {}

Zombie::~Zombie() {

	std::cout << "<" << name << ">" << "I'm dyinggggG.... and now I am dead actually, byeee..." << std::endl;
	return;
}

void Zombie::announce( void ) {
	
	std::cout << "<" << name << ">" << "BraiiiiiiinnnzzzZ..." << std::endl;
	return;
}
