#include <iostream>
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main( void ) {

	std::cout << std::endl;
	IMateriaSource *src = new MateriaSource(); 
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());

	ICharacter *me = new Character("me");
	ICharacter *bob = new Character("bob");
	
	AMateria *tmp, *tmp1, *tmp2;

	tmp = src->createMateria("ice");
	me->equip(tmp);
	me->printInv();

	tmp1 = src->createMateria("cure");
	me->equip(tmp1);
	me->printInv();

	tmp2 = src->createMateria("ice");
	me->equip(tmp2);
	me->equip(tmp2);
	me->printInv();

	me->unequip(0);
	delete tmp;
	me->printInv();

	me->use(0, *bob);
	// me->use(1, *bob);
	// me->use(2, *bob);
	// me->use(3, *bob);

	delete bob;
	delete me;
	delete src;
	delete tmp1;
	delete tmp2;

	return 0;
}