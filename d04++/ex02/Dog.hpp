
#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal {
	
	Brain *br;
public:
	Dog();
	~Dog();
	Dog(const Dog &c);
	Dog &operator=(const Dog &c);
	void makeSound() const;
	void printBrainAdd();
};

#endif