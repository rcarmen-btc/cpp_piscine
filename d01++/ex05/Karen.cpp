#include "Karen.hpp"

void Karen::debug( void ) {

	std::cout << "[debug comment]:" << std::endl;
	std::cout	<< "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl
				<< "I just love it!" << std::endl;
}

void Karen::info( void ) {

	std::cout << "[info comment]:" << std::endl;
	std::cout	<<  "I cannot believe adding extra bacon cost more money." << std::endl
				<< "You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning( void ) {

	std::cout << "[warning comment]:" << std::endl;
	std::cout	<< "I think I deserve to have some extra bacon for free."<< std::endl
				<< "I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error( void ) {

	std::cout << "[error comment]:" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

Karen::Karen() {}

void Karen::complain( std::string level ) {

	std::string lvls[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	void (Karen::*complain[])(void) = {
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error,
	};

	for (int i = 0; i < 4; i++)	{
		if (lvls[i] == level)
			(this->*complain[i])();
	}
	
}