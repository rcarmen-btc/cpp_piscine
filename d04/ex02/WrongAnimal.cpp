#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("default_type") {

	std::cout << "[WrongAnimal] instance with type *" << type <<"* was created (constructor)" << std::endl;
}

WrongAnimal::~WrongAnimal() {

	std::cout << "[WrongAnimal] with type *" << type << "* is die (destructor)" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &a) {

	*this = a;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &a) {

	type = a.getType();
	return *this;
}

std::string WrongAnimal::getType() const {

	return type;
}

void WrongAnimal::makeSound() const {

	std::cout << "*Trying to make noise, but the WrongAnimal don't know what type WrongAnimal is he*" << std::endl;
}