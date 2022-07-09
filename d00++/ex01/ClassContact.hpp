#ifndef CLASSCONTACT_HPP
# define CLASSCONTACT_HPP
# include "main.hpp"


class Contact {

	std::string fname, lname, nickname, phonenumber, secret;
	
public:

	Contact(); 
	Contact(std::string a_fname);
	Contact(std::string a_fname, std::string a_lname, std::string a_nickname, std::string a_phonenumber, std::string a_secret);
	void set(std::string a_fname, std::string a_lname, std::string a_nickname, std::string a_phonenumber, std::string a_secret);
	void get(std::string &a_fname, std::string &a_lname, std::string &a_nickname, std::string &a_phonenumber, std::string &a_secret);
};

#endif