#include "Cat.hpp"

Cat::Cat() {

	type = "Cat";
	std::cout << "[Cat] instance with type *" << type <<"* was created (constructor)" << std::endl;
}

Cat::~Cat() {

	std::cout << "[Cat] with type *" << type << "* is die (destructor)" << std::endl;
}

Cat::Cat(const Cat &c) {

	*this = c;
}

Cat &Cat::operator=(const Cat &c) {

	type = c.getType();
	return *this;
}

void Cat::makeSound() const {

	std::cout << "Meow! Meow!" << std::endl;
}