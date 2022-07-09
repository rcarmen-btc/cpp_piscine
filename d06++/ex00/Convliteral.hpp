#ifndef CONVLITERAL_HPP
# define CONVLITERAL_HPP
# include <iostream>
# include <stdlib.h>
# include <limits>

enum e_littype
{
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	PINF,
	MINF,
	PINFF,
	MINFF,
	NAN,
	NANF,
	WTF
};

class Convliteral {

	std::string lit;
	e_littype type;
public:

	class FlowException: public std::exception {
	public:
		const char* what(void) const throw();
	};

	class ImpossibleException: public std::exception {
	public:
		const char* what(void) const throw();
	};

	class NonDisplayableException: public std::exception {
	public:
		const char* what(void) const throw();
	};

	class CanNotConvertException: public std::exception {
	public:
		const char* what(void) const throw();
	};

	Convliteral();
	~Convliteral();
	Convliteral(const Convliteral &src);
	Convliteral(const std::string &src);
	Convliteral &operator=(const Convliteral &src);
	int printData();
	void is_char();
	void is_int();
	int is_double_or_float();
	void is_forsince();
	char to_char();
	int to_int();
	double to_double();
	float to_float();
	e_littype get_type();
};

#endif