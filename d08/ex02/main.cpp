#include <iostream>
#include "Mutantstack.hpp"
#include <vector>
#include <list>

int main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::cout << "=============MY TESTS=============" << std::endl;

	std::list<int> j;

	j.push_front(5);
	j.push_front(17);

	std::cout << *j.begin() << std::endl;

	j.pop_front();

	std::cout << j.size() << std::endl;

	j.push_back(3);
	j.push_back(5);
	j.push_back(737);
	//[...]
	j.push_back(0);

	
	std::list<int>::iterator itl = j.begin();
	std::list<int>::iterator itel = j.end();

	++itl;
	--itl;
	while (itl != itel)
	{
		std::cout << *itl << std::endl;
		++itl;
	}

	std::cout << "================================" << std::endl;

	MutantStack<int> st;

	st.push(32);
	st.push(205);
	st.push(7);
	st.push(32);
	st.push(5);
	st.push(7);
	st.push(1000);
	st.push(7);

	MutantStack<int>::iterator itst = st.begin();
	MutantStack<int>::iterator itest = st.end();

	while (itst != itest)
	{
		std::cout << *itst << std::endl;
		++itst;
	}
	itst = st.begin();
	std::cout << "----reverce----" << std::endl;
	while (itst != itest)
	{
		--itest;
		std::cout << *itest << std::endl;
	}

	return 0;
}