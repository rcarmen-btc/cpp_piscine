#include <iostream>
#include "Bureaucrat.hpp"

int main( void ) {

	std::cout << std::endl;

	try {
		std::cout << "\\\\\\\\\\\\\\\\\\\\Tests 1\\\\\\\\\\\\\\\\\\\\" << std::endl;
		Bureaucrat sam("Sam", 1);
		std::cout << sam << std::endl;
		--sam;
		std::cout << sam << std::endl;
		++sam;
		std::cout << sam << std::endl;

		Bureaucrat teo("Teo", 149);
		std::cout << teo << std::endl;
		teo.downGrade();
		std::cout << teo << std::endl;
		teo.upGrade();
		std::cout << teo << std::endl;
	}
	catch (std::exception &e) {

		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << "\\\\\\\\\\\\\\\\\\\\Tests 2\\\\\\\\\\\\\\\\\\\\" << std::endl;
		 Bureaucrat sam("Sam", 0);
	}
	catch (std::exception &e) {

		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << "\\\\\\\\\\\\\\\\\\\\Tests 3\\\\\\\\\\\\\\\\\\\\" << std::endl;
		 Bureaucrat sam("Sam", 1);
		std::cout << sam << std::endl;
		--sam;
		std::cout << sam << std::endl;
		++sam;
		std::cout << sam << std::endl;
		++sam;
		std::cout << sam << std::endl;
	}
	catch (std::exception &e) {

		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << "\\\\\\\\\\\\\\\\\\\\Tests 4\\\\\\\\\\\\\\\\\\\\" << std::endl;
		Bureaucrat teo("Teo", 149);
		std::cout << teo << std::endl;
		 teo.downGrade();
		 std::cout << teo << std::endl;
		teo.downGrade();
		std::cout << teo << std::endl;
		teo.upGrade();
		std::cout << teo << std::endl;
		std::cout << std::endl;
	}
	catch (std::exception &e) {

		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << "\\\\\\\\\\\\\\\\\\\\Tests 5\\\\\\\\\\\\\\\\\\\\" << std::endl;
		 Bureaucrat sam("Sam", 151);
	}
	catch (std::exception &e) {

		std::cout << e.what() << std::endl;
	}
	return 0;
}