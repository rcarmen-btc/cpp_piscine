#include "main.hpp"

int	add_contact(Phoneliber &book) {

	std::cout << "	ᶠᶸᶜᵏ♥ᵧₒᵤ" << std::endl;

	std::string fname, lname, nickname, phonenumber, secret;

	std::cout << "Enter..." << std::endl << "	.. first name: ";
	if (0 == getline(std::cin, fname))
		return 1;

	std::cout << "	...last name: ";
	if (0 == getline(std::cin, lname))
		return 1;

	std::cout << "	...nickname: ";
	if (0 == getline(std::cin, nickname))
		return 1;

	std::cout << "	...phone number: ";
	if (0 == getline(std::cin, phonenumber))
		return 1;

	std::cout << "	...darkest secret: ";
	if (0 == getline(std::cin, secret))
		return 1;

	std::cout << std::endl;
	std::cout << "==========================================" << std::endl;
	std::cout << "|  !!!A new contact has been created!!!  |" << std::endl;
	std::cout << "==========================================" << std::endl;
	std::cout << std::endl;

	book.get_contact(book.get_ci(1)).set(fname, lname, nickname, phonenumber, secret);
	return 0;
}
