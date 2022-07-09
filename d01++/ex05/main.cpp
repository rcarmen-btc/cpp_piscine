#include "Karen.hpp"

int main( void ) {

	Karen k;

	std::cout << std::endl;
	std::cout << "----------" << std::endl;
	k.complain("DEBUG");
	k.complain("INFO");
	k.complain("WARNING");
	k.complain("ERROR");

	k.complain("EROR");

	k.complain("ERRORR");
	k.complain("WARNLNG");
	k.complain("fsdfsdf");
	std::cout << "----------" << std::endl;
	return 0;
}