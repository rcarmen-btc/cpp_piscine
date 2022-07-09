#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main( void ) {

	std::cout << std::endl;

	try {
		std::cout << "\\\\\\\\\\\\\\\\\\\\Tests 1\\\\\\\\\\\\\\\\\\\\" << std::endl;
		std::cout << std::endl;
				
		Bureaucrat b1("Sam", 10);
		std::cout << b1 << std::endl;
		std::cout << std::endl;


		Form f("Example1", 11, 3);
		std::cout << f << std::endl;
		b1.signForm(f);
		std::cout << std::endl;
		std::cout << f << std::endl;

		std::cout << "\\\\\\\\\\\\\\\\\\\\Tests 2\\\\\\\\\\\\\\\\\\\\" << std::endl;

		Form f1("Example2", 9, 3);
		std::cout << f1 << std::endl;
		b1.signForm(f1);
		std::cout << std::endl;
		std::cout << f1 << std::endl;

		std::cout << "\\\\\\\\\\\\\\\\\\\\Tests 3\\\\\\\\\\\\\\\\\\\\" << std::endl;

		Form f2("Example2", 0, 3);
		std::cout << f2 << std::endl;
		b1.signForm(f2);
		std::cout << std::endl;
		std::cout << f2 << std::endl;
	}
	catch (std::exception &e) {

		std::cout << e.what() << std::endl;
	}
	return 0;
}