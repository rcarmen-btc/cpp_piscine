#ifndef	BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

class Brain {
	
public:
	std::string ideas[100];
	Brain();
	~Brain();
	Brain(const Brain &b);
	Brain &operator=(const Brain &b);
};

#endif