#include "Zombie.hpp"

int main() {
	
	int n = 10;
	Zombie *horde = zombieHorde(n, "Johhn");
	for (int i = 0; i < n; i++) {
		std::cout << "Index: " << i << ": ";
		horde[i].announce();
	}
	delete [] horde;
	return 0;
}