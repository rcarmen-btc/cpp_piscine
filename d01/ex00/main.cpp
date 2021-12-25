#include "Zombie.hpp"

int main() {
	
	std::string Zoe = "Zoe";
	std::string Ted = "Ted";
	
	Zombie *hZombie = newZombie(Ted);
	hZombie->announce();
	
	randomChump(Zoe);

	delete hZombie;
	return 0;
}