#include "Dog.hpp"

Dog::Dog() {

	type = "Dog";
	std::cout << "[Dog] instance with type *" << type <<"* was created (constructor)" << std::endl;
}

Dog::~Dog() {

	std::cout << "[Dog] with type *" << type << "* is die (destructor)" << std::endl;
}

Dog::Dog(const Dog &c): Animal() {

	*this = c;
}

Dog &Dog::operator=(const Dog &c) {

	type = c.getType();
	return *this;
}

void Dog::makeSound() const {
	
	std::cout << "Woof! Woof!" << std::endl;
}