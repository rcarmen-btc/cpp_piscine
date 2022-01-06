#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main( void ) {

	Animal *a[100];
	std::cout << std::endl;
	std::cout << "Create:" << std::endl;
	for (int i = 1; i <= 10; i++) {
		if (i <= 5)
			a[i] = new Dog();
		else
			a[i] = new Cat();
		a[i]->makeSound();
		a[i]->printBrainAdd();
		std::cout << std::endl;
	}
	std::cout << std::endl;

	std::cout << "Delete:" << std::endl;
	for (int i = 1; i <= 10; i++) {
		delete a[i];
	}
	std::cout << std::endl;

	Cat c;
	Cat c1 = c; 

	Dog d;
	Dog d1 = d;

	std::cout << std::endl;
	std::cout << "=====================" << std::endl;
	std::cout << "Deep copy:" << std::endl;
	std::cout << "Cat deep copy:" << std::endl;
	std::cout << "Cat " << &c << ":" << std::endl;
	c.printBrainAdd();
	std::cout << "Cat " << &c1 << ":" << std::endl;
	c1.printBrainAdd();
	std::cout << std::endl;

	std::cout << "Dog deep copy:" << std::endl;
	std::cout << "Dog " << &d << ":" << std::endl;
	d.printBrainAdd();
	std::cout << "Dog " << &d1 << ":" << std::endl;
	d1.printBrainAdd();
	std::cout << "=====================" << std::endl;
	std::cout << std::endl;
	
	return 0;
}