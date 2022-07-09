#ifndef FIXED_HPP
# define FIXED_HPP
# include <math.h>
# include <ostream>

class Fixed {

	int fixed_point;
	static const int fract_bits = 8;

public:

	Fixed();
	~Fixed();
	Fixed(const Fixed &fi);
	Fixed(const int i);
	Fixed(const float f);

	const Fixed &operator=(const Fixed &f);
	Fixed &operator++();
	Fixed &operator--();
	Fixed operator++(int);
	Fixed operator--(int);

	int getFr( void ) const;
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;
	static Fixed &min(Fixed &f1, Fixed &f2);
	static const Fixed &min(const Fixed &f1, const Fixed &f2);
	static Fixed &max(Fixed &f1, Fixed &f2);
	static const Fixed &max(const Fixed &f1, const Fixed &f2);
};

std::ostream &operator<<(std::ostream &out, const Fixed &f);
bool operator==(const Fixed &c1, const Fixed &c2);
bool operator!=(const Fixed &c1, const Fixed &c2);
bool operator<(const Fixed &c1, const Fixed &c2);
bool operator<=(const Fixed &c1, const Fixed &c2);
bool operator>(const Fixed &c1, const Fixed &c2);
bool operator>=(const Fixed &c1, const Fixed &c2);
Fixed operator+(const Fixed &c1, const Fixed &c2);
Fixed operator-(const Fixed &c1, const Fixed &c2);
Fixed operator*(const Fixed &c1, const Fixed &c2);
Fixed operator/(const Fixed &c1, const Fixed &c2);

#endif