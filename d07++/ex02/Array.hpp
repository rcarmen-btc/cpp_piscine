#ifndef ARRAY_HPP
# define ARRAY_HPP

template<class T>
class Array {
	
	T *array;
	unsigned int size;
public:

	class OutOfRangeException: public  std::exception {
		public:
			virtual const char * what(void) const throw() {
				return "Error: Index is out of range" ;
			}
	};

	Array(): array(NULL), size(0) {}

	~Array() {

		if (size > 0)
			delete [] array;
	};

	Array(unsigned int n): array(new T[n]), size(n) { }

	Array(Array const &a): array(new T[a.getSize()]), size(a.getSize()) {

		for (unsigned int i = 0; i < size; i++)
			array[i] = a.array[i];
	}

	T & operator[](unsigned int i) const {

		if (i < 0 || i >= size)
			throw Array::OutOfRangeException();
		else
			return (array[i]);
	}
	
	Array &operator=(Array const &a) {

		if (size > 0)
			delete [] array;
		size = a.getSize();
		array = new T[size];
		for (unsigned int i = 0; i < size; i++)
			array[i] = a.array[i];
		return *this;
	}

	unsigned int getSize() const {

		return size;
	}
};

#endif