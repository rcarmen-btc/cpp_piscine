#include "main.hpp"

void	search_contact(Phoneliber (&cost)[8]) {

	for (int i = 0; i < cost->get_ci(); i++)
	{
		std::cout << cost[i].get_fname() << std::endl;
	}
}