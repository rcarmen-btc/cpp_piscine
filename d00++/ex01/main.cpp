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

int print_prompt()
{
	std::cout << "Enter the command: ";
	return 1;
}

void prompt(Phoneliber &book) {

	int ret = 0;
	std::cout << "Enter the command: ";
	std::string command; 
	while (std::getline(std::cin, command) != 0)
	{
		if (command == "ADD")
			ret = add_contact(book);
		else if (command == "SEARCH")
			ret = search_contact(book);
		else if (command == "EXIT")
			return;
		else 
		{
			std::cout << "Command \"" << command << "\" not found" << std::endl;
			ret = 0;
		}
		if (ret == 0)
			std::cout << "Enter the command: ";
		ret = 1;
	}
	std::cout << std::endl;
	return;
}

int main(int ac, char **av) {

	Phoneliber book;

	(void)av;
	if (ac != 1)
		return -1;

	greeting();
	prompt(book);
	return 0;
}







