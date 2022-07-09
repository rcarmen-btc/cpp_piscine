#include "Karen.hpp"
#include <iostream>

int	main(int argc, char **av) {

	Karen	karen;

	if (argc != 2) {
		std::cout << "Usage: ./karenFilter <log_level>;\n";
		return 1;
	}

	karen.complain(std::string(av[1]));

	return (0);
}