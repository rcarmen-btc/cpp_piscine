#include "Fixed.hpp"
#include "iostream"

Fixed::Fixed( void ) {

	std::cout << "Default [constructor] called" << std::endl;
	fixed_point = 0;
	return;
}

Fixed::Fixed(const Fixed &fi) {
	
	std::cout << "Copy [constructor] called" << std::endl;
	fixed_point = fi.getRawBits();
	return;
}

const Fixed &Fixed::operator=( const Fixed &fi ) {

	std::cout << "Assignation (operator) called" << std::endl;
	fixed_point = fi.getRawBits();
	return *this; 
}

int Fixed::getRawBits( void ) const {
	
	std::cout << "getRawBits member function called" << std::endl;
	return fixed_point;
}

void Fixed::setRawBits( int const raw ) {
	
	fixed_point = raw;
	return;
}

Fixed::~Fixed( void ) {

	std::cout << "Destructor called" << std::endl;
	return;
}