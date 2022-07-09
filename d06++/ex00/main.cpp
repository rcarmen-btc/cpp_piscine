#include "Convliteral.hpp"
#include <stdio.h>

void print_type(Convliteral &conv) {

	try {
		std::cout << "char: " << conv.to_char() << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		std::cout << "int: " << conv.to_int() << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	try {
	std::cout << "float: "; 
		if (conv.to_float() >= 1000000)
			std::cout << conv.to_float() << "f" << std::endl;
		else
		{
			std::cout << conv.to_float();
		    if (!(conv.to_float() - static_cast<int>(conv.to_float())))
  				std::cout << ".0";
			std::cout << "f" << std::endl;
		}
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		std::cout << "double: ";
		if (conv.to_double() >= 1000000)
			std::cout << conv.to_double() << std::endl;
		else {
			std::cout << conv.to_double();
			if (!(conv.to_double() - static_cast<int>(conv.to_double())))
				std::cout << ".0" << std::endl;
			else
				std::cout << std::endl;
		}
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
}

int main(int ac, char **av) {

	std::cout << std::endl;
	if (ac != 2) {
		std::cout << "Error: Only works with one argument" << std::endl;
		return 1;
	}
	try {
		Convliteral conv(av[1]);
		print_type(conv);
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
