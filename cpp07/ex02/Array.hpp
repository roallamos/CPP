#ifndef _COLORS
# define _COLORS

# define BLACK   "\033[1;30m"
# define RED     "\033[1;31m"
# define GREEN   "\033[1;32m"
# define YELLOW  "\033[1;33m"
# define BLUE    "\033[1;34m"
# define MAGENTA "\033[1;35m"
# define CYAN    "\033[1;36m"
# define WHITE   "\033[1;37m"
# define NC      "\033[0m"

#endif // !_COLORS

// Array declaration --------------------------------------------------------

#ifndef _ARRAY_HPP
# define _ARRAY_HPP

# include <iostream>

template  <typename T>	class Array {
private:
	T *ptr;
	unsigned int	_size;
public:
	Array(void){
		std::cout << GREEN "Array default constructor called" NC << std::endl;
		ptr = new T[1]();
		_size = 1;
	};
	Array(unsigned int size){
		std::cout << GREEN "Array default constructor called" NC << std::endl;
		_size = size;
		ptr = new T[_size]();
	};
	Array(Array const& other){
		std::cout << GREEN "Array copy constructor called" NC << std::endl;
		*this = other;
	};
	~Array(void){
		std::cout << RED "Array destructor called" NC << std::endl;
		delete[] ptr;
	};

	Array& operator=(Array const& other){
		if (this == &other)
			return *this;
		this->_size = other._size;
		this->ptr = new T[_size];
		for (unsigned int i = 0; i < _size; i++)
			ptr[i] = other.ptr[i];
		return *this;
	};
	T	&operator[](size_t i){
		if (_size <= i)
			throw Array::BadAccess();
		return (this->ptr[i]);
	}

	class BadAccess : public std::exception{
		public:
			virtual const char * what() const throw()
			{
				return (RED"Bad access of Array"NC);
			};
	};
};
#endif // !_ARRAY_HPP

