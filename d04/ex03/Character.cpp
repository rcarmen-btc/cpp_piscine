#include "Character.hpp"

Character::Character(): curr_inv_index(0), name("default_name") { }

Character::~Character() {}

Character::Character(std::string aname): curr_inv_index(0), name(aname) { }

Character::Character(const Character &c) { curr_inv_index = c.curr_inv_index; }

Character &Character::operator=(const Character &c) { curr_inv_index = c.curr_inv_index; return *this; }

std::string const &Character::getName() const { return name; }

void Character::equip(AMateria* m) {

	if (curr_inv_index < 4) {
		for (int i = 0; i < 4; i++) {
			if (inv[i] == 0) {
				inv[i] = m;
				std::cout << (char)toupper(m->getType()[0]) << m->getType().substr(1, m->getType().length() - 1) << " added to inventory (" << curr_inv_index + 1 << "/4)" << std::endl;
				curr_inv_index++;
				return;
			}
			else if (inv[i] == m) {
				std::cout << "This " << m->getType() << " already added in inventory (" << curr_inv_index << "/4)" << std::endl;
				return;
			}
		}
	}
	else
		std::cout << "You cat not add " << m->getType() <<". Inventory is full (4/4)" << std::endl;
}

void Character::unequip(int idx) {

	if (idx >= 0 && idx <= 3 && inv[idx] != 0) {
		curr_inv_index--;
		std::cout << "Remove " << inv[idx]->getType() << " with index " << idx << " from inventory (" << curr_inv_index << "/4)" << std::endl;
		inv[idx] = 0;
	}
	else
		std::cout << "Inventory is empty" << std::endl;
}

void Character::use(int idx, ICharacter& target) {

	if (idx >= 0 && idx < curr_inv_index && inv[idx] != 0)
		inv[idx]->use(target);
	else
		std::cout << "In slot with index " << idx << " no materia" << std::endl;
}

void Character::printInv() {

	for (int i = 0; i < 4; i++) {
		if (inv[i] != 0)
			std::cout << "[" <<  inv[i]->getType() << "]";
		else if (inv[i] == 0)
			std::cout << "[" <<  inv[i] << "]";
	}
	std::cout << std::endl;
	std::cout << std::endl;
}
