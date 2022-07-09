#include "Span.hpp"
#include <iostream>
#include <limits>

const char *Span::NotEnoughException::what(void) const throw() {
	return "Exception Caught: No data or single element";
}

const char *Span::FullException::what(void) const throw() {
	return "Exception Caught: There is full";
}

Span::Span(): n(0) {}

Span::Span(unsigned int n): n(n) {}

Span::Span(Span const &s): spots(s.spots), n(s.n) {}

Span &Span::operator=(Span const &s) {

	n = s.n;
	spots = s.spots;
	return *this;
}

unsigned int Span::shortestSpan() {

	if (spots.empty() || spots.size() <= 1) 
		throw NotEnoughException();
	std::sort(spots.begin(), spots.end());
	int dif;
	int shortes_dif = std::numeric_limits<int>::max();
	for (int i = 0; i < static_cast<int>(spots.size()); i++)
	{
		for (int j = i; j < static_cast<int>(spots.size()); j++)
		{
			if (i != j) {
				dif = std::abs(spots[i] - spots[j]);
				shortes_dif = std::min(dif, shortes_dif);
			}
		}
	}
	return static_cast<unsigned int>(shortes_dif);
}

unsigned int Span::longestSpan() {

	if (spots.empty() || spots.size() <= 1) 
		throw NotEnoughException();
	std::sort(spots.begin(), spots.end());
	std::vector<int>::iterator start = spots.begin();
	std::vector<int>::iterator end = spots.end() - 1;
	return static_cast<unsigned int>(std::abs(*end - *start));
}

void Span::addNumber(int value) {

	if (n == 0)
		throw NotEnoughException();
	if (spots.size() >= n)
		throw FullException();
	spots.push_back(value);
}

void Span::addNumber(std::vector<int>::iterator start, std::vector<int>::iterator stop) {
	
	if (n == 0)
		throw NotEnoughException();
	if (static_cast<unsigned long>(std::distance(start, stop)) > n - spots.size())
		throw FullException();
	spots.insert(spots.end(), start, stop);		
}

Span::~Span() {  }