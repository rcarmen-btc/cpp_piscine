#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"
# include <iostream>

class Point {

	Fixed const x;
	Fixed const y;

public:

	Point();
	~Point();
	Point(const Point &p);
	Point(const float f1, const float f2);

	Point &operator=(const Point &p);
	Fixed getx() const;
	Fixed gety() const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif