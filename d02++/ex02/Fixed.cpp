#include "Fixed.hpp"
#include "iostream"

Fixed::Fixed(): fixed_point(0) {}

Fixed::~Fixed() {}

Fixed::Fixed(const Fixed &fi) { *this = fi; }

Fixed::Fixed(const int i) { fixed_point = i << fract_bits; }

Fixed::Fixed(const float f) { fixed_point = roundf(f * (1 << fract_bits)); }

const Fixed &Fixed::operator=(const Fixed &fi) {

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

int Fixed::getFr( void ) const {
	
	return fract_bits;
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
