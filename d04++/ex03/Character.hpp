#ifndef CARACTER_HPP
# define CARACTER_HPP
# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Character: public ICharacter {

	int curr_inv_index;
	std::string name;
	AMateria *inv[4];
public:
	Character();
	~Character();
	Character(std::string aname);
	Character &operator=(const Character &c);
	Character(const Character &c);
	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
	void printInv();
};

#endif