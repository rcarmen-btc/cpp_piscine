#include "Zombie.hpp"
#include "Zombie.h"

int main() {
	
	std::string Zoe = "Zoe";
	std::string Ted = "Ted";
	std::string Fred = "Fred";
	
	Zombie FredZombie(Fred);
	Zombie *TedZombie = newZombie(Ted);

	FredZombie.announce();
	TedZombie->announce();
	randomChump(Zoe);

	delete TedZombie;
	return 0;
}