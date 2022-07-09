#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
#include <list>

template <typename T>
class MutantStack: public std::stack<T> {

public:

	MutantStack(): std::stack<T>() {}
	virtual ~MutantStack() {};
	MutantStack(MutantStack const & m) : std::stack<T>(m) {}

	MutantStack	&operator=(MutantStack const & m) {
		this->c = m.c ;
		return *this;
	}
	
	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin(void) {
		return this->c.begin();
	}

	iterator end() {
		return this->c.end();
	}
};

#endif