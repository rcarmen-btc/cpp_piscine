#include "main.hpp"
#include <string>

void prompt(Phoneliber (&cost)[8]) {
	while (1)
	{
		std::cout << "Enter the command: ";
		std::string command; 
		std::cin >> command;
		
		if (!command.compare("ADD"))
			add_contact(cost);
		if (!command.compare("SEARCH"))
		{
			search_contact(cost);
		}
		// if (!command.compare("EXIT"))
			// exit_phoneliber();
	}
}

int main(void) {

	std::string fname, lname, nickname, phonenumber, secret;
	Phoneliber costomers[8];

	costomers[0].set("F", "L", "N", "P", "S");
	prompt(costomers);

	return 0;
}







