#ifndef EASYFIND_HPP
# define EASYFIND_HPP
#include <stdexcept>
#include <exception>
#include <algorithm>
#include <array>
#include <vector>
#include <list>
#include <map>

class EmptyContException: public std::exception
{
	public:
		virtual const char * what(void) const throw() {
			return "Exception Caught: Empty data container";
		}
};

class NotFoundException: public std::exception
{
	public:
		virtual const char * what(void) const throw() {
			return "Exception Caught: Not found.";
		}
};

template<typename T>
typename T::const_iterator easyfind(T const &data, int const find) {
	
	if (data.empty())
		throw EmptyContException();
	typename T::const_iterator iter = std::find(data.cbegin(), data.cend(), find);
	if (iter == data.end())
		throw EmptyContException();
	return iter;
}

#endif