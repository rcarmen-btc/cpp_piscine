#include "main.hpp"
#include <string>


void greeting() {
	std::cout	<< std::endl
				<< std::endl
				<< std::endl
				<< "	======Welcome=to=phoneliber======= " << std::endl
				<< "	| All commands:┴┬┴┬┴┬┴┬┴┬┴┬┴┬┴┬┴┬|" << std::endl
				<< "	|┬┴┬┴┬┴┬┴┬┴┬┴┬┴┬┴┬┴┬┴┬┴┬┴┬┴┬┴┬ADD| " << std::endl
				<< "	|┴┬┴┬┴┬┴┬┴┬┴┬┴┬┴┬┴┬┴┬┴┬┴┬┴┬SEARCH| " << std::endl
				<< "	|┬┴┬┴┬┴┬┴┬┴┬┴┬┴┬┴┬┴┬┴┬┴┬┴┬┴┬┴EXIT| " << std::endl
				<< "	==================================" << std::endl
				<< std::endl;
	return;
}

void prompt(Phoneliber &book) {

	std::cout << "Enter the command: ";
	std::string command; 
	while (std::getline(std::cin, command))
	{
		// if (!command.compare("ADD"))
		if (command == "ADD")
			add_contact(book);
		else if (command == "SEARCH")
			search_contact(book);
		else if (command == "EXIT")
			return;
		else 
			std::cout << "Command \"" << command << "\" not found" << std::endl;
		std::cout << "Enter the command: ";
	}
	std::cout << std::endl;
	return;
}

int main(void) {

	Phoneliber book;

	greeting();
	prompt(book);
	return 0;
}







