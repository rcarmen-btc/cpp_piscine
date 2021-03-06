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

const Fixed &Fixed::operator=( const Fixed &fi ) {

	std::cout << "Copy assignment operator called" << std::endl;
	fixed_point = fi.fixed_point;
	return *this; 
}

int Fixed::getRawBits( void ) const {
	
	return fixed_point;
}

int Fixed::getFr( void ) const {
	
	return fract_bits;
}

void Fixed::setRawBits( int const raw ) {
	
	fixed_point = raw;
}

Fixed::Fixed( const int i ) {

	std::cout << "Int constructor called" << std::endl;
	fixed_point = i << fract_bits;
}

Fixed::Fixed( const float f ) {

	std::cout << "Float constructor called" << std::endl;
	fixed_point = roundf(f * (1 << fract_bits));
}

std::ostream &operator<<(std::ostream &out, const Fixed &f) {

	out << (float)f.getRawBits() / (1 << f.getFr());
	return out;
}

float Fixed::toFloat( void ) const {

	return (float)fixed_point / (1 << fract_bits);
}

int Fixed::toInt( void ) const {

	return fixed_point >> fract_bits;
}
