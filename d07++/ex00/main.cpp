#include "whatever.hpp"

int main(void) {

	std::cout << std::endl;

	int a = 8;
	int b = 10;

	std::cout << "	___________" << std::endl;
	std::cout << "var ->	|a	b |" << std::endl;
	std::cout << "	|---------|" << std::endl;
	std::cout << "val ->	|" << a << "	" << b << "|" << std::endl;
	std::cout << "	|<--swp-->|" << std::endl;
	
	::swap(a, b);

	int min_ab = ::min(a, b);
	int max_ab = ::max(a, b);

	std::cout << "	|" << a << "	" << b << " |" << std::endl;
	std::cout << "	|---------|" << std::endl;
	std::cout << "	|min   max|" << std::endl;
	std::cout << "	|" << min_ab << "	" << max_ab << "|" << std::endl;
	std::cout << "	|_________|" << std::endl;


	std::cout << std::endl;


	char c = 'A';
	char d = 'X';

	std::cout << "	___________" << std::endl;
	std::cout << "var ->	|a	b |" << std::endl;
	std::cout << "	|---------|" << std::endl;
	std::cout << "val ->	|" << c << "	" << d << " |" << std::endl;
	std::cout << "	|<--swp-->|" << std::endl;

	::swap(c, d);

	char min_cd = ::min(c, d);
	char max_cd = ::max(c, d);

	std::cout << "	|" << c << "	" << d << " |" << std::endl;
	std::cout << "	|---------|" << std::endl;
	std::cout << "	|min   max|" << std::endl;
	std::cout << "	|" << min_cd << "	" << max_cd << " |" << std::endl;
	std::cout << "	|_________|" << std::endl;


	std::cout << std::endl;


	double e = 32.92;
	double f = 23.2;
	
	std::cout << "	_______________" << std::endl;
	std::cout << "var ->	|a	    b |" << std::endl;
	std::cout << "	|-------------|" << std::endl;
	std::cout << "val ->	|" << e << "	  " << f << "|" << std::endl;
	std::cout << "	|<----swp---->|" << std::endl;

	::swap(e, f);

	double min_ef = ::min(e, f);
	double max_ef = ::max(e, f);

	std::cout << "	|" << e << "	 " << f << "|" << std::endl;
	std::cout << "	|-------------|" << std::endl;
	std::cout << "	|min       max|" << std::endl;
	std::cout << "	|" << min_ef << "	 " << max_ef << "|" << std::endl;
	std::cout << "	|_____________|" << std::endl;

	std::cout << std::endl;


	float g = 84.2f;
	float h = 953.99f;

	std::cout << "	_______________" << std::endl;
	std::cout << "var ->	|a	    b |" << std::endl;
	std::cout << "	|-------------|" << std::endl;
	std::cout << "val ->	|" << g << "	" << h << "|" << std::endl;
	std::cout << "	|<----swp---->|" << std::endl;
	
	::swap(g, h);

	float min_gh = ::min(g, h);
	float max_gh = ::max(g, h);

	std::cout << "	|" << g << "	 " << h << " |" << std::endl;
	std::cout << "	|-------------|" << std::endl;
	std::cout << "	|min       max|" << std::endl;
	std::cout << "	|" << min_gh << "	" << max_gh << "|" << std::endl;
	std::cout << "	|_____________|" << std::endl;
	
	std::cout << std::endl;
	return 0;
}