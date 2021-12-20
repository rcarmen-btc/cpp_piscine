#include "ClassMain.hpp"
#include <iostream>

int Phoneliber::ci = 0;

Phoneliber::Phoneliber() {
	fname = "";
	lname = "";
	nickname = "";
	phonenumber = "";
	secret = ""; 
	Phoneliber::ci = 0;
	return;
}

Phoneliber::Phoneliber(std::string a_fname) {
	fname = a_fname;
	lname = "";
	nickname = "";
	phonenumber = "";
	secret = ""; 
	return;
}

Phoneliber::Phoneliber(std::string a_fname, std::string a_lname, std::string a_nickname, std::string a_phonenumber, std::string a_secret) {
	fname = a_fname;
	lname = a_lname;
	nickname = a_nickname;
	phonenumber = a_phonenumber;
	secret = a_secret;
	Phoneliber::ci++;
	return;
}

void Phoneliber::set(std::string a_fname, std::string a_lname, std::string a_nickname, std::string a_phonenumber, std::string a_secret) {
	fname = a_fname;
	lname = a_lname;
	nickname = a_nickname;
	phonenumber = a_phonenumber;
	secret = a_secret;
	Phoneliber::ci++;
	return;
}

void Phoneliber::print() {
	std::cout << fname << std::endl;
	std::cout << lname << std::endl;
	// std::cout << name << std::endl;
	return;
}

int Phoneliber::get_ci() { return Phoneliber::ci; }

std::string Phoneliber::get_fname() { return fname; }

std::string Phoneliber::get_lname() { return lname; }

std::string Phoneliber::get_nickname() { return nickname; }

std::string Phoneliber::get_phonenumber() { return phonenumber; }

std::string Phoneliber::get_secret() { return secret; }
