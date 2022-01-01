#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point) {

	Fixed first = (a.getx() - point.getx()) * (b.gety() - a.gety()) - (b.getx() - a.getx()) * (a.gety() - point.gety());
	Fixed second = (b.getx() - point.getx()) * (c.gety() - b.gety()) - (c.getx() - b.getx()) * (b.gety() - point.gety());
	Fixed third = (c.getx() - point.getx()) * (a.gety() - c.gety()) - (a.getx() - c.getx()) * (c.gety() - point.gety());
	if ((first > Fixed(0) && second > Fixed(0) && third > Fixed(0)) | 
		(first < Fixed(0) && second < Fixed(0) && third < Fixed(0)))
		return true;
	return false;
}
