#include "Fixed.hpp"
#include "iostream"

Fixed::Fixed(): fixed_point(0) {

	if (DEBUG)
		std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
		
	if (DEBUG)
		std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fi) {
	
	if (DEBUG)
		std::cout << "Copy constructor called" << std::endl;
	*this = fi;
}

Fixed::Fixed(const int i) {

	if (DEBUG)
		std::cout << "Int to fixed point constructor called" << std::endl;
	fixed_point = i << fract_bits;
}

Fixed::Fixed(const float f) {

	if (DEBUG)
		std::cout << "Float to fixed point constructor called" << std::endl;
	fixed_point = roundf(f * (1 << fract_bits));
}

const Fixed &Fixed::operator=(const Fixed &fi) {

	if (DEBUG)
		std::cout << "Assignation operator called" << std::endl;
	fixed_point = fi.fixed_point;
	return *this; 
}

bool operator<(const Fixed &f1, const Fixed &f2) {

	return f1.getRawBits() < f2.getRawBits();
}

bool operator<=(const Fixed &f1, const Fixed &f2) {

	return f1.getRawBits() <= f2.getRawBits();
}

bool operator>(const Fixed &f1, const Fixed &f2) {

	return f1.getRawBits() > f2.getRawBits();
}

bool operator>=(const Fixed &f1, const Fixed &f2) {

	return f1.getRawBits() >= f2.getRawBits();
}

bool operator==(const Fixed &f1, const Fixed &f2) {

	return f1.getRawBits() == f2.getRawBits();
}

bool operator!=(const Fixed &f1, const Fixed &f2) {

	return f1.getRawBits() != f2.getRawBits();
}

std::ostream &operator<<(std::ostream &out, const Fixed &f) {

	out << (float)f.fixed_point / (1 << f.fract_bits);
	return out;
}

float Fixed::toFloat( void ) const {

	return (float)fixed_point / (1 << fract_bits);
}

int Fixed::toInt( void ) const {

	return fixed_point >> fract_bits;
}

int Fixed::getRawBits( void ) const {
	
	return fixed_point;
}

void Fixed::setRawBits( int const raw ) {
	
	fixed_point = raw;
	return;
}

Fixed operator+(const Fixed &c1, const Fixed &c2) {

	return c1.toFloat() + c2.toFloat();
}

Fixed operator-(const Fixed &c1, const Fixed &c2) {

	return c1.toFloat() - c2.toFloat();
}

Fixed operator*(const Fixed &c1, const Fixed &c2) {

	return c1.toFloat() * c2.toFloat();
}

Fixed operator/(const Fixed &c1, const Fixed &c2) {

	return c1.toFloat() / c2.toFloat();
}

Fixed &Fixed::operator++() {

	++fixed_point;
	return *this;	
}

Fixed &Fixed::operator--() {

	--fixed_point;
	return *this;	
}

Fixed Fixed::operator++(int) {

	Fixed temp;
	temp.setRawBits(fixed_point);
	++(*this);
	return temp;	
}

Fixed Fixed::operator--(int) {

	Fixed temp(fixed_point);
	--(*this);
	return temp;	
}

Fixed &Fixed::min(Fixed &f1, Fixed &f2) {

	if (f1 < f2)
		return f1;
	return f2;
}

const Fixed &Fixed::min(const Fixed &f1, const Fixed &f2) {

	if (f1 < f2)
		return f1;
	return f2;
}

Fixed &Fixed::max(Fixed &f1, Fixed &f2) {

	if (f1 > f2)
		return f1;
	return f2;
}

const Fixed &Fixed::max(const Fixed &f1, const Fixed &f2) {

	if (f1 > f2)
		return f1;
	return f2;
}
