#include "Karen.hpp"
#include <iostream>

std::string convertToString(char* a, int size)
{
    int i;
    std::string s = "";
    for (i = 0; i < size; i++) {
        s = s + a[i];
    }
    return s;
}

int	ft_strlen(char *s) {

	int i = 0;
	while (s[i])
		i++;
	return i;	
}

int	main(int argc, char **av) {

	Karen	karen;
	int letter_summ = 0;
	std::cout << std::endl;
	if (argc == 2) {
		std::string avStr = convertToString(av[1], ft_strlen(av[1]));
		int len = avStr.length();
		for (int i = 0; i < len; i++) {
			letter_summ += avStr[i];
		}
		switch (letter_summ)
		{
			case 359:
						std::cout << "[ DEBUG ]\n";
						karen.complain("DEBUG");
						std::cout << "\n";
			case 300:
						std::cout << "[ INFO ]\n";
						karen.complain("INFO");
						std::cout << "\n";
			case 534:
						std::cout << "[ WARNING ]\n";
						karen.complain("WARNING");
				 		std::cout << "\n";
			case 394:  
						std::cout << "[ ERROR ]\n";
						karen.complain("ERROR");
						break ;
			default:
						std::cout << "[ Probably complaining about insignificant problems ]\n";
		}
	}
	else
		std::cout << "Usage: ./karenFilter <log_level>;\n";
	return (0);
}