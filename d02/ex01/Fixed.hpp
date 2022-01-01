#ifndef FIXED_HPP
# define FIXED_HPP
# include <math.h>
# include <ostream>

class Fixed {

	int fixed_point;
	static const int fract_bits = 8;
public:
	Fixed( void );
	Fixed(const Fixed &fi);
	Fixed( const int i );
	Fixed( const float f );
	~Fixed( void );
	friend std::ostream &operator<<(std::ostream &out, const Fixed &f);
	const Fixed &operator=(const Fixed &f);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;
};

#endif