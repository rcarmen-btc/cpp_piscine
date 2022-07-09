#include "main.hpp"

int Phoneliber::ci = 0;

int Phoneliber::max_ci = 0;

int Phoneliber::get_ci(int stat) { 

	int ret;

	if (stat == 0)
		return ci;
	ret = ci;
	ci++;
	if (ci > max_ci)
		max_ci = ci;
	if (ci == 8)
		ci = 0;
	return ret;
}

int Phoneliber::get_max_ci() { return max_ci; }

Contact &Phoneliber::get_contact(int i) { return contacts[i]; }
