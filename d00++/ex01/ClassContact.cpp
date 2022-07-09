#include "main.hpp"

Contact::Contact() {

	fname = "";
	lname = "";
	nickname = "";
	phonenumber = "";
	secret = ""; 
	return;
}

Contact::Contact(std::string a_fname) {

	fname = a_fname;
	lname = "";
	nickname = "";
	phonenumber = "";
	secret = ""; 
	return;
}

Contact::Contact(std::string a_fname, std::string a_lname, std::string a_nickname, std::string a_phonenumber, std::string a_secret) {

	fname = a_fname;
	lname = a_lname;
	nickname = a_nickname;
	phonenumber = a_phonenumber;
	secret = a_secret;
	return;
}

void Contact::set(std::string a_fname, std::string a_lname, std::string a_nickname, std::string a_phonenumber, std::string a_secret) {

	fname = a_fname;
	lname = a_lname;
	nickname = a_nickname;
	phonenumber = a_phonenumber;
	secret = a_secret;
	return;
}

void Contact::get(std::string &a_fname, std::string &a_lname, std::string &a_nickname, std::string &a_phonenumber, std::string &a_secret) {

	a_fname = fname;
	a_lname = lname;
	a_nickname = nickname;
	a_phonenumber = phonenumber;
	a_secret = secret;
	return;
}
