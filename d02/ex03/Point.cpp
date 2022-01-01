#include "Point.hpp"

Point::Point(): x(0), y(0) {}

Point::Point(const Point &p): x(p.x), y(p.y) {}

Point::Point(const float f1, const float f2): x(f1), y(f2) {}

Point &Point::operator=(const Point &p) { (void)p; return *this; }

Fixed Point::getx() const { return x; }

Fixed Point::gety() const { return y; }

Point::~Point() { return; }