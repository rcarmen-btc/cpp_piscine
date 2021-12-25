#include "main.hpp"


int Phoneliber::ci = 0;
int Phoneliber::max_ci = 0;
int Phoneliber::get_ci() { return Phoneliber::ci; }
int Phoneliber::get_max_ci() { return max_ci; }
Contact &Phoneliber::get_contact(int i) { return contacts[i]; }
