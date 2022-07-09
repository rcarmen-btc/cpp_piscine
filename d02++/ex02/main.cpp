#include "Fixed.hpp"
#include <iostream>

int main( void ) {

	{
		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;

		std::cout << b << std::endl;

		std::cout << Fixed::max( a, b ) << std::endl;
	}

	Fixed a;

	Fixed c = 21.3f;
	Fixed d = 29.7f;
	Fixed e = (c + d);

	std::cout << std::endl;
	std::cout << "Fixed point addition:" << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;
	std::cout << e << std::endl;
	std::cout << std::endl;

	c = 3212;
	d = 6788;
	e = (c + d);
	std::cout << "Int addition:" << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;
	std::cout << e << std::endl;
	std::cout << std::endl;

	std::cout << "Increment and decrement:" << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << std::endl;

	std::cout << "Division and multiplication:" << std::endl;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed const x = b / Fixed(2);
	std::cout << "b = " << b << std::endl;
	std::cout << "x = " << x << std::endl;
	std::cout << std::endl;

	std::cout << "Bool:" << std::endl;
	if (x == b)
	// if (x != b)
	// if (x >= b)
	// if (x <= b)
	// if (x < b)
	// if (x > b)
		std::cout << "[Yes]" << std::endl;
	else
		std::cout << "[No]" << std::endl;
	std::cout << std::endl;

	std::cout << "Min and max:" << std::endl;
	std::cout << Fixed::min(x, b) << std::endl;
	std::cout << Fixed::max(x, b) << std::endl;

	return 0;
}