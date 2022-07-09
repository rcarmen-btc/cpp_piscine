#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() {

	type = "Cat";
	br = new Brain();
	std::cout << "[Cat] instance with type *" << type <<"* was created (constructor)" << std::endl;
}

Cat::~Cat() {

	delete br;
	std::cout << "[Cat] with type *" << type << "* is die (destructor)" << std::endl;
	std::cout << std::endl;
}

Cat::Cat(const Cat &c): Animal() {

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

Cat &Cat::operator=(const Cat &c) {

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

void Cat::makeSound() const {

	std::cout << "Meow! Meow!" << std::endl;
}

void Cat::printBrainAdd() {

	std::cout << " - I'm " << type << " and my brain is " << br << std::endl;
}