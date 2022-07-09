#include <iostream>
#include "iter.hpp"

int main(void) {

	std::cout << std::endl;
	int a[] = {2, 3, 4};
	::iter(a, 3, &print);
	std::cout << std::endl;
	std::string b[] = {"Hi", "Bye", "Like"};
	::iter(b, 3, &print);
	std::cout << std::endl;
	return 0;
}