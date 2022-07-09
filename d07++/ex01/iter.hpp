#ifndef ITER_HPP
# define ITER_HPP

template<class T>
void	iter(T *array_addr, int len, void (*func)(T & target)) {

	for (int i = 0; i < len; i++)
		func(array_addr[i]);
}

template<class T>
void	print(T &e) {

	std::cout << e << std::endl;
}

#endif