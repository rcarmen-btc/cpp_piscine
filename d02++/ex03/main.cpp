#include "Point.hpp"

int main( void ) {

	Point a(2, 4);
	Point b(5, 5);
	Point c(5, 2);

	Point e(3, 4);
	if (bsp(a, b, c, e))
		std::cout << "In triangle" << std::endl;
	else
		std::cout << "Out of triangle or on the edge of triangle" << std::endl;

	Point x(4.9, 4);
	if (bsp(a, b, c, x))
		std::cout << "In triangle" << std::endl;
	else
		std::cout << "Out of triangle or on the edge of triangle" << std::endl;

	Point f(5, 4);
	if (bsp(a, b, c, f))
		std::cout << "In triangle" << std::endl;
	else
		std::cout << "Out of triangle or on the edge of triangle" << std::endl;

	Point z(2, 4);
	if (bsp(a, b, c, z))
		std::cout << "In triangle" << std::endl;
	else
		std::cout << "Out of triangle or on the edge of triangle" << std::endl;
	return 0;
}
