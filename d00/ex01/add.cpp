#include "main.hpp"

void	add_contact(Phoneliber (&cost)[8]) {

	std::string fname, lname, nickname, phonenumber, secret;
	std::cout << "Enter..." << std::endl;
	std::cout << "	.. first name: ";
	std::cin >> fname;

	std::cout << "	...last name: ";
	std::cin >> lname;

	std::cout << "	...nickname: ";
	std::cin >> nickname;

	std::cout << "	...phone number: ";
	std::cin >> phonenumber;

	std::cout << "	...darkest secret: ";
	std::cin >> secret;
	std::cout << std::endl;
	std::cout << "================================" << std::endl;
	std::cout << "= !!!New contact is created!!! =" << std::endl;
	std::cout << "================================" << std::endl;

	cost[cost->get_ci()].set(fname, lname, nickname, phonenumber, secret);
	return;
}