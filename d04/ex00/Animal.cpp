#include "Animal.hpp"

Animal::Animal(): type("default_type") {

	std::cout << "[Animal] instance with type *" << type <<"* was created (constructor)" << std::endl;
}

Animal::~Animal() {

	std::cout << "[Animal] with type *" << type << "* is die (destructor)" << std::endl;
}

Animal::Animal(const Animal &a) {

	*this = a;
}

Animal &Animal::operator=(const Animal &a) {

	type = a.getType();
	return *this;
}

std::string Animal::getType() const {

	return type;
}

void Animal::makeSound() const {

	std::cout << "*Trying to make noise, but the animal don't know what type animal is he*" << std::endl;
}
