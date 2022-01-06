#ifndef MATERIALSOURCE_HPP
# define MATERIALSOURCE_HPP
# include <iostream>
# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource {

	AMateria *leared[4];
	int curr_inv_index;
public:
	MateriaSource();
	MateriaSource(const MateriaSource &m);
	MateriaSource &operator=(const MateriaSource &m);
	~MateriaSource();
	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
};

#endif