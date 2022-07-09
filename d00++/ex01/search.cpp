#include "main.hpp"

void	cut_if_more_then_ten(std::string &fname, std::string &lname, std::string &nickname) {

	if (fname.length() > 10) {
		fname = fname.substr(0, 9);
		fname.append(".");
	}
	if (lname.length() > 10) {
		lname = lname.substr(0, 9);
		lname.append(".");
	}
	if (nickname.length() > 10) {
		nickname = nickname.substr(0, 9);
		nickname.append(".");
	}
	return;
}

int is_alpha_str(std::string str_i) {

	long unsigned int i = 0;
	while (i < str_i.length()) {

		if (isalpha(str_i[i]))
			return 1;
		i++;
	}
	return 0;
}

int exitttt(std::string &str_i) {

	if (std::getline(std::cin, str_i))
		return 1;
	return 0;
}

int	search_contact(Phoneliber book) {

	std::string fname, lname, nickname, phonenumber, secret;
	std::cout << std::setfill('-') << std::setw(1) << "+" << std::setw(10) << "-" << std::setw(1) << "+" << std::setw(10) << "-" << std::setw(1) << "+" << std::setw(10) << "-" << std::setw(1) << "+" << std::setw(10) << "-" << std::setw(1) << "+" << std::setw(10) << std::endl;
	std::cout << std::setfill(' ') << std::setw(1) << "|" << std::setw(10) << "index" << "|" << std::setw(10) << "first name" << std::setw(1) << "|" << std::setw(10) << "last name" << std::setw(1) << "|"  << std::setw(10) << "nickname" << std::setw(1) << "|" << std::setw(1) << std::endl;
	std::cout << std::setfill('-') << std::setw(1) << "+" << std::setw(10) << "-" << std::setw(1) << "+" << std::setw(10) << "-" << std::setw(1) << "+" << std::setw(10) << "-" << std::setw(1) << "+" << std::setw(10) << "-" << std::setw(1) << "+" << std::setw(10) << std::endl;
	for (int i = 0; i < book.get_max_ci(); i++) {
		if (book.get_max_ci() == 0)
			break;
		book.get_contact(i).get(fname, lname, nickname, phonenumber, secret);
		cut_if_more_then_ten(fname, lname, nickname);
		
		std::cout << std::setfill(' ') << std::setw(1) << "|" << std::setw(10) << i << std::setw(1) << "|" << std::setw(10) << fname << std::setw(1) << "|"  << std::setw(10) << lname << std::setw(1) << "|" << std::setw(10) << nickname << std::setw(1) << "|" << std::endl;
		std::cout << std::setfill('-') << std::setw(1) << "+" << std::setw(10) << "-" << std::setw(1) << "+" << std::setw(10) << "-" << std::setw(1) << "+" << std::setw(10) << "-" << std::setw(1) << "+" << std::setw(10) << "-" << std::setw(1) << "+" << std::setw(10) << std::endl;
	}

	std::cout << std::endl;
	if (book.get_max_ci() == 0)
		return 0;
	std::string str_i;
	std::cout << "Enter the index of the desired contact: ";
	int i;
	int ret;
	while ((ret = exitttt(str_i)) || 1)
	{
		if (ret == 0)
			return 1;
		if (is_alpha_str(str_i)){
			std::cout << "Invalid string input!" << std::endl;
			std::cout << "Enter the index of the desired contact: ";
			continue;
		}
		i = std::atoi(str_i.c_str());
		if (i >= book.get_max_ci() || i < 0) {
			std::cout << "Invalid index!" << std::endl;
			std::cout << "Enter the index of the desired contact: ";
			continue;
		}
		book.get_contact((int)i).get(fname, lname, nickname, phonenumber, secret);
		std::cout	<< std::endl
					<< "first name: "<< "	" << fname << std::endl
					<< "last name: "<< "	" << lname << std::endl
					<< "nickname: "<< "	" << nickname << std::endl
					<< "phone number: "<< "	" << phonenumber << std::endl
					<< "secret: "<< "	" << secret << std::endl
					<< std::endl;
		break;
	}
	return 0;
}