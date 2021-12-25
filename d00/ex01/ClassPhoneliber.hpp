#ifndef CLASSPHONELIBER_HPP
# define CLASSPHONELIBER_HPP
# include "main.hpp"

class Phoneliber {

	static int ci;
	static int max_ci;
	Contact contacts[8];
	friend class Contact;
public:
	int get_ci();
	int get_max_ci(); 
	Contact &get_contact(int i);
};

#endif