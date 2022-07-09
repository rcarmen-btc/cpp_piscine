#include "Convliteral.hpp"

Convliteral::Convliteral(const std::string &src) {

	type = WTF;
	lit = src;
	is_char();
	is_double_or_float();
	is_int();
	is_forsince();
	if (type == WTF)
		throw Convliteral::CanNotConvertException();
}

e_littype Convliteral::get_type() {

	return type;
}

int Convliteral::printData() {

	std::cout << "String: " << lit << std::endl;
	std::cout << "Type: " << type << std::endl;
	return 0;
}

void Convliteral::is_char() {

	if (lit.length() == 1 && isprint(lit[0]))
		type = CHAR;
}

void Convliteral::is_int() {

	unsigned long i = 0;
	if (lit[0] == '-' && lit.length() != 1)
		i++;
	while (i < lit.length()) {

		if (!isdigit(lit[i]))
			return ;
		i++;
	}
	type = INT;
}

int Convliteral::is_double_or_float() {

	int dot = 0;
	int notdigit = 0;
	int digit = 0;
	unsigned long i = 0;
	if (lit[0] == '-')
		i++;
	while (i < lit.length()) {
		if (lit[i] == '.')
			dot++;
		else if (!isdigit(lit[i]))
			notdigit++;
		else if (isdigit(lit[i]))
			digit++;
		else 
			return 1;
		i++;
	}
	if (digit > 0 && dot == 1) {
		if (notdigit == 1 && lit[lit.length() - 1] == 'f')
			type = FLOAT;
		else if (notdigit == 0)
			type = DOUBLE;
	}
	return type;
}

void Convliteral::is_forsince() {

	if (lit == "-inf")
		type = MINF;
	else if (lit == "+inf" || lit == "inf")
		type = PINF;
	else if (lit == "-inff")
		type = MINFF;
	else if (lit == "+inff" || lit == "inff")
		type = PINFF;
	else if (lit == "nan")
		type = NAN;
	else if (lit == "nanf")
		type = NANF;
	else {
		long double ld;
		char *a;
		ld = std::strtold(lit.c_str(), &a);
		if (ld >= std::numeric_limits<int>::max())
			type = PINF;
		if (ld <= std::numeric_limits<int>::min())
			type = MINF;
		if (ld >= std::numeric_limits<float>::max())
			type = PINFF;
	}
}

char Convliteral::to_char() {

	if (type >= PINF && type <= MINFF)
		throw Convliteral::ImpossibleException();
	if (type == NAN || type == NANF)
		throw Convliteral::ImpossibleException();
	if (this->to_int() > 255)
		throw Convliteral::ImpossibleException();
	if (this->to_int() < 33 || this->to_int() > 127)
		throw Convliteral::NonDisplayableException();
	if (type == CHAR)
		return lit[0];
	return static_cast<char>(this->to_float());
}	

int Convliteral::to_int() {

	if (type == CHAR)
		return static_cast<int>(lit[0]);
	if (type >= PINF && type < NAN)
		throw Convliteral::ImpossibleException();
	if (type == NAN || type == NANF)
		throw Convliteral::ImpossibleException();
	return static_cast<float>(std::atoi(lit.c_str()));
}

double Convliteral::to_double() {

	if (type == CHAR)
		return static_cast<double>(lit[0]);
	if (type == PINFF)
		throw Convliteral::ImpossibleException();
	if (type == MINFF)
		throw Convliteral::ImpossibleException();
	return static_cast<float>(std::atof(lit.c_str()));
}

float Convliteral::to_float() {

	if (type == CHAR)
		return static_cast<float>(lit[0]);
	if (type == PINFF)
		throw Convliteral::ImpossibleException();
	if (type == MINFF)
		throw Convliteral::ImpossibleException();
	return static_cast<float>(std::atof(lit.c_str()));
}

Convliteral::Convliteral() { }

Convliteral::~Convliteral() { }

Convliteral::Convliteral(const Convliteral &src): lit(src.lit), type(src.type) { }

const char* Convliteral::FlowException::what(void) const throw() {
	return "overflow or underflow";
}

const char* Convliteral::ImpossibleException::what(void) const throw() {
	return "impossible";
}

const char* Convliteral::NonDisplayableException::what(void) const throw() {
	return "Non displayable";
}

const char* Convliteral::CanNotConvertException::what(void) const throw() {
	return "The conversion cannot be performed";
}