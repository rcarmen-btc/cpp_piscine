#include "main.hpp"

void	add_contact(Phoneliber &book) {

	std::cout << "	ᶠᶸᶜᵏ♥ᵧₒᵤ" << std::endl;

	std::string fname, lname, nickname, phonenumber, secret;

	std::cout << "Enter..." << std::endl << "	.. first name: ";
	getline(std::cin, fname);

	std::cout << "	...last name: ";
	getline(std::cin, lname);

	std::cout << "	...nickname: ";
	getline(std::cin, nickname);

	std::cout << "	...phone number: ";
	getline(std::cin, phonenumber);

	std::cout << "	...darkest secret: ";
	getline(std::cin, secret);
	std::cout << std::endl;
	std::cout << "==========================================" << std::endl;
	std::cout << "|  !!!A new contact has been created!!!  |" << std::endl;
	std::cout << "==========================================" << std::endl;
	std::cout << std::endl;

	book.get_contact(book.get_ci()).set(fname, lname, nickname, phonenumber, secret);
	return;
}