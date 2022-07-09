#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() {

	type = "Dog";
	br = new Brain();
	std::cout << "[Dog] instance with type *" << type <<"* was created (constructor)" << std::endl;
}

Dog::~Dog() {

	delete br;
	std::cout << "[Dog] with type *" << type << "* is die (destructor)" << std::endl;
	std::cout << std::endl;
}

Dog::Dog(const Dog &c): Animal(){

	type = c.type;
	if (c.br) {
		br = new Brain();
		for (int i = 0; i < 100; i++) {
			std::copy(c.br->getIdeas(), c.br->getIdeas() + 100, br->getIdeas());
		}
	}
	else
		br = 0;
}

Dog &Dog::operator=(const Dog &c) {

	if (this == &c)
		return *this;
	delete br;
	type = c.type;
	if (c.br) {
		br = new Brain();
		for (int i = 0; i < 100; i++) {
			std::copy(c.br->getIdeas(), c.br->getIdeas() + 100, br->getIdeas());
		}
	}
	else
		br = 0;

	return *this;
}

void Dog::makeSound() const {
	
	std::cout << "Woof! Woof!" << std::endl;
}

void Dog::printBrainAdd() {

	std::cout << " - I'm " << type << " and my brain is " << br << std::endl;
}