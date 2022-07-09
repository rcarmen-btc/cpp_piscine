#ifndef SPAN_HPP
# define SPAN_HPP
# include <vector>
# include <cmath>
# include <climits>
# include <set>
# include <algorithm>
# include <stdexcept>

class Span {
	
	std::vector<int> spots;
	unsigned int n;

public:

	class NotEnoughException: public std::exception
	{
		public:
			virtual const char * what(void) const throw();
	};

	class FullException: public std::exception
	{
		public:
			virtual const char * what(void) const throw();
	};

	Span();
	~Span();
	Span(unsigned int n);
	Span(Span const &s);

	Span &operator=(Span const &s);

	unsigned int longestSpan();
	unsigned int shortestSpan();

	void addNumber(int value);
	void addNumber(std::vector<int>::iterator start, std::vector<int>::iterator stop);

};

#endif