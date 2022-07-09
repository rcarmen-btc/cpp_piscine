#include "Fixed.hpp"
#include "iostream"

Fixed::Fixed(): fixed_point(0) {

	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {

	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fi) {
	
	std::cout << "Copy constructor called" << std::endl;
	*this = fi;
}

const Fixed &Fixed::operator=(const Fixed &fi) {

	std::cout << "Copy assignment operator called" << std::endl;
	fixed_point = fi.getRawBits();
	return *this; 
}

void Fixed::setRawBits(int const raw) {
	
	std::cout << "setRawBits member function called" << std::endl;
	fixed_point = raw;
}

int Fixed::getRawBits() const {
	
	std::cout << "getRawBits member function called" << std::endl;
	return fixed_point;
}
