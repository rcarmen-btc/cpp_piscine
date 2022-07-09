#include "MateriaSource.hpp"

MateriaSource::MateriaSource(): curr_inv_index(0) { }

MateriaSource::~MateriaSource() {

	for (int i = 0; i < curr_inv_index; i++) {
		delete leared[i];
	}
}

MateriaSource::MateriaSource(const MateriaSource &m) { curr_inv_index = m.curr_inv_index; }

MateriaSource &MateriaSource::operator=(const MateriaSource &m) { curr_inv_index = m.curr_inv_index; return *this; }

void MateriaSource::learnMateria(AMateria* m) {

	if (curr_inv_index < 4) {
		leared[curr_inv_index++] = m;
		std::cout << "New materia " << m->getType() << " has been learned" << std::endl;
	}
	else
		std::cout << "Inventory is full" << std::endl;
}

AMateria *MateriaSource::createMateria(std::string const & type) {

	for (int i = 0; i < 4; i++) {
		if (i < curr_inv_index && type == leared[i]->getType())
			return leared[i]->clone();
	}
	std::cout << "This materia has not been learned yet" << std::endl;
	return 0;
}