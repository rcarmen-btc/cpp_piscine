#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal {
	
	Brain *br;	
public:
	Cat();
	~Cat();
	Cat(const Cat &c);
	Cat &operator=(const Cat &c);
	void makeSound() const;
	void setIdea(std::string idea);
	std::string getIdea();
	void printBrainAdd();
};

#endif