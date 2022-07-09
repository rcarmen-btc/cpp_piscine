#include "WrongCat.hpp"

WrongCat::WrongCat() {

	type = "WrongCat";
	std::cout << "[WrongCat] instance with type *" << type <<"* was created (constructor)" << std::endl;
}

WrongCat::~WrongCat() {

	std::cout << "[WrongCat] with type *" << type << "* is die (destructor)" << std::endl;
}

WrongCat::WrongCat(const WrongCat &c): WrongAnimal() {

	*this = c;
}

WrongCat &WrongCat::operator=(const WrongCat &c) {

	type = c.getType();
	return *this;
}

void WrongCat::makeSound() const {

	std::cout << "Meow! Meow!" << std::endl;
}