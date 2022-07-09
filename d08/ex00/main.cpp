#include <iostream>
#include "easyfind.hpp"
#include "vector"

void list_test() {

	std::cout << std::endl;

	std::list<int> a;

	a.push_back(10);
	a.push_back(1);
	a.push_back(90);

	try {
		std::list<int>::const_iterator b = easyfind<std::list<int> >(a, 1);
		std::cout << *b << std::endl;
		b = easyfind<std::list<int> >(a, 10);
		std::cout << *b << std::endl;
		b = easyfind<std::list<int> >(a, 90);
		std::cout << *b << std::endl;
		b = easyfind<std::list<int> >(a, 100);
	}
	catch (std::exception const &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	std::list<double> c;

	c.push_back(10);
	c.push_back(1);
	c.push_back(3);

	try {
		std::list<double>::const_iterator d = easyfind<std::list<double> >(c, 1);
		std::cout << *d << std::endl;
		d = easyfind<std::list<double> >(c, 10);
		std::cout << *d << std::endl;
		d = easyfind<std::list<double> >(c, 3);
		std::cout << *d << std::endl;
		d = easyfind<std::list<double> >(c, 22);
	}
	catch (std::exception const &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	std::list<double> e;

	try {
		std::list<double>::const_iterator f = easyfind<std::list<double> >(e, 1);
		std::cout << *f << std::endl;
	}
	catch (std::exception const &e) {
		std::cout << e.what() << std::endl;
	}

}

void vector_test() {

	std::cout << std::endl;

	std::vector<int> a;

	a.push_back(10);
	a.push_back(1);
	a.push_back(90);

	try {
		std::vector<int>::const_iterator b = easyfind<std::vector<int> >(a, 1);
		std::cout << *b << std::endl;
		b = easyfind<std::vector<int> >(a, 10);
		std::cout << *b << std::endl;
		b = easyfind<std::vector<int> >(a, 90);
		std::cout << *b << std::endl;
		b = easyfind<std::vector<int> >(a, 100);
	}
	catch (std::exception const &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	std::vector<double> c;

	c.push_back(10);
	c.push_back(1);
	c.push_back(3);

	try {
		std::vector<double>::const_iterator d = easyfind<std::vector<double> >(c, 1);
		std::cout << *d << std::endl;
		d = easyfind<std::vector<double> >(c, 10);
		std::cout << *d << std::endl;
		d = easyfind<std::vector<double> >(c, 3);
		std::cout << *d << std::endl;
		d = easyfind<std::vector<double> >(c, 22);
	}
	catch (std::exception const &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	std::vector<double> e;

	try {
		std::vector<double>::const_iterator f = easyfind<std::vector<double> >(e, 1);
		std::cout << *f << std::endl;
	}
	catch (std::exception const &e) {
		std::cout << e.what() << std::endl;
	}
}

int main(void) {

	vector_test();
	std::cout << "=================" << std::endl;
	list_test();

	return 0;
}
