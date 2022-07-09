#include "Base.hpp"
#include <iostream>
#include <stdlib.h>
#include <time.h>

Base * generate(void) {
	srand(time(0));
	switch ((rand() % 3)) {
	case 0:
		return new A();
	case 1:
		return new B();
	case 2:
		return new C();
	}
	return NULL;
}

void identify(Base* p) {

	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify(Base& p) {

	try {
		void(dynamic_cast<A&>(p));
		std::cout << "A" << std::endl;
	}
	catch (...) {
		try {
			void(dynamic_cast<B&>(p));
			std::cout << "B" << std::endl;
		}
		catch (...) {
			try {
				void(dynamic_cast<C&>(p));
				std::cout << "C" << std::endl;
			}
			catch (...) { }
		}
	}
}

int main(void) {

	Base *b = generate();

	identify(b);
	identify(*b);
	
	delete b;
	return 0;
}