#include <iostream>
#include "Span.hpp"

int main(void) {

	try {

		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

		sp.addNumber(11);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {

		Span sp = Span(1);

		sp.addNumber(11);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

		sp.addNumber(11);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {

		Span sp(20);
		std::vector<int> v(1, 10);		

		sp.addNumber(v.begin(), v.end());
		sp.addNumber(-1);
		sp.addNumber(-2);
		sp.addNumber(-100);
		sp.addNumber(2);

		std::cout << "longestSpan(): " << sp.longestSpan() << std::endl;
		std::cout << "shortestSpan(): " << sp.shortestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}