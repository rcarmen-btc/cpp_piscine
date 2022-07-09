#include "Brain.hpp"

Brain::Brain() {

	std::cout << "[Brain] instance was created (constructor)" << std::endl;
}

Brain::~Brain() {

	std::cout << "[Brain] is die (destructor)" << std::endl;
}

Brain::Brain(const Brain &b) {

	for (int i = 0; i < 100; i++)
		std::copy(b.ideas, b.ideas + 100, ideas);
}

Brain &Brain::operator=(const Brain &b) {

	for (int i = 0; i < 100; i++)
		std::copy(b.ideas, b.ideas + 100, ideas);
	(void)b;
	return *this;
}

std::string *Brain::getIdeas() {

	return ideas;
}