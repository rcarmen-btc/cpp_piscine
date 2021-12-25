#include "Karen.hpp"

void Karen::defunck( void ) {
	return;
}

void Karen::debug( void ) {

	std::cout << "[debug comment]:" << std::endl;
	std::cout	<< "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl
				<< "I just love it!" << std::endl;
	std::cout << std::endl;
}

void Karen::info( void ) {

	std::cout << "[info comment]:" << std::endl;
	std::cout	<<  "I cannot believe adding extra bacon cost more money." << std::endl
				<< "You don’t put enough! If you did I would not have to ask for it!" << std::endl;
	std::cout << std::endl;
}

void Karen::warning( void ) {

	std::cout << "[warning comment]:" << std::endl;
	std::cout	<< "I think I deserve to have some extra bacon for free."<< std::endl
				<< "I’ve been coming here for years and you just started working here last month." << std::endl;
	std::cout << std::endl;
}

void Karen::error( void ) {

	std::cout << "[error comment]:" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}

Karen::Karen() {

	for (int i = 0; i < 256; i++) {
		comments[i] = &Karen::defunck;
	}
	comments[(68 + 69 + 66 + 85 + 71) / 3] = &Karen::debug;
	comments[(69 + 82 + 82 + 79 + 82) / 3] = &Karen::error;
	comments[(73 + 78 + 70 + 79) / 3] = &Karen::info;
	comments[(87 + 65 + 82 + 78 + 73 + 78 + 71) / 3] = &Karen::warning;
}

void Karen::complain( std::string level ) {

	int letter_summ = 0;
	int len = level.length();
	for (int i = 0; i < len; i++) {
		letter_summ += level[i];
	}
	(this->*comments[letter_summ / 3])();
}