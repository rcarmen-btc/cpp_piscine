#ifndef CLASSMAIN_HPP
# define CLASSMAIN_HPP
# include <iostream>

class Phoneliber {

	static int ci;
	std::string fname, lname, nickname, phonenumber, secret;
public:
	Phoneliber(); 
	Phoneliber(std::string a_fname);
	Phoneliber(std::string a_fname, std::string a_lname, std::string a_nickname, std::string a_phonenumber, std::string a_secret);
	void set(std::string a_fname, std::string a_lname, std::string a_nickname, std::string a_phonenumber, std::string a_secret);
	int get_ci();
	std::string get_fname();
	std::string get_lname();
	std::string get_nickname();
	std::string get_phonenumber();
	std::string get_secret();
	void print();
};

#endif