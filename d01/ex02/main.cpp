#include <iostream>

int main( void )
{
	std::cout << std::endl;
	std::string s = "HI THIS IS BRAIN";
	std::cout << "String 's':" << std::endl;
	std::cout << "	Address in memory:	" << &s << " ---> "<< s << std::endl;

	std::string *stringPTR = &s;
	std::string &stringREF = s;

	std::cout	<< "	stringPTR:		" << stringPTR << " ---> "<< *stringPTR << std::endl
				<< "	stringREF:		" << &stringREF << " ---> "<< stringREF << std::endl;

	(void)stringPTR;
	(void)stringREF;
	return 0;
}