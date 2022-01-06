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

Cat::Cat(const Cat &c) {

	type = c.type;
	if (c.br) {
		br = new Brain();
		for (int i = 0; i < 100; i++) {
			std::copy(c.br->ideas, c.br->ideas + 100, br->ideas);
		}
	}
	else
		br = 0;
}

Cat &Cat::operator=(const Cat &c) {

	if (this == &c)
		return *this;
	
	delete[] c.br;
	type = c.type;
	if (c.br) {
		br = new Brain();
		for (int i = 0; i < 100; i++) {
			std::copy(c.br->ideas, c.br->ideas + 100, br->ideas);
		}
	}
	else
		br = 0;

	return *this;
}

void Cat::setIdea(std::string idea) {

	br->ideas[0] = idea;
}

std::string Cat::getIdea() {

	return br->ideas[0];
}

void Cat::makeSound() const {

	std::cout << "Meow! Meow!" << std::endl;
}

void Cat::printBrainAdd() {

	std::cout << " - I'm " << type << " and my brain is " << br << std::endl;
}