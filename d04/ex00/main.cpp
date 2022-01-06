#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main( void ) {

	std::cout << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << std::endl;
	std::cout << "ANIMAL:" << std::endl;
	Animal *a = new Animal();
	std::cout << "- Make some noise" << std::endl;
	std::cout << "- ";
	a->makeSound();
	std::cout << "Type:" << std::endl;
	std::cout << a->getType() << std::endl;

	std::cout << std::endl;
	std::cout << "CAT:" << std::endl;
	Cat *c = new Cat();
	std::cout << "- Make some noise kitty" << std::endl;
	std::cout << "- ";
	c->makeSound();
	std::cout << "Type:" << std::endl;
	std::cout << c->getType() << std::endl;

	std::cout << std::endl;
	std::cout << "DOG:" << std::endl;
	Dog *d = new Dog();
	std::cout << "- Make some noise doggy" << std::endl;
	std::cout << "- ";
	d->makeSound();
	std::cout << "Type:" << std::endl;
	std::cout << d->getType() << std::endl;

	std::cout << std::endl;
	std::cout << "WRONGCAT:" << std::endl;
	WrongAnimal *wa = new WrongCat();
	std::cout << "- Make some noise" << std::endl;
	wa->makeSound();
	std::cout << "Type:" << std::endl;
	std::cout << wa->getType() << std::endl;

	std::cout << std::endl;
	std::cout << "DEATH TIME:" << std::endl;
	return 0;
}