#include "Span.hpp"
#include <iostream>

// CONSTRUCTORS AND DESTRUCTORS-------------------------------------------------
Span::Span(void)
{
	std::cout << GREEN "Span default constructor called" NC << std::endl;
}

Span::Span(unsigned int n) : N(n)
{
	std::cout << GREEN "Span default constructor called" NC << std::endl;
}

Span::Span(Span const& other)
{
	std::cout << GREEN "Span copy constructor called" NC << std::endl;
	*this = other;
}

Span::~Span(void)
{
	std::cout << RED "Span destructor called" NC << std::endl;
}

// OPERATORS--------------------------------------------------------------------
Span& Span::operator=(Span const& other)
{
	if (this == &other) {
		return *this;
	}
	this->N = other.N;
	return *this;
}

// METHODS AND MEMBER FUNCTIONS-------------------------------------------------

void	Span::addNumber(int nb)
{
	if (vec.size() < this->N)
		vec.push_back(nb);
	else
		throw (Span::Full()); 
}

void	Span::addMultipleNumber(int min, int max)
{
	if (min < max)
	{
		for (int i = min; i <= max; i++)
			addNumber(i);
	}
	else
	{
		for (int i = max; i <= min; i++)
			addNumber(i);
	}
}

int	Span::shortestSpan()
{
	int minDiff;
	std::vector<int> cpy = vec;
	std::sort(cpy.begin(), cpy.end());
	if (vec.size() <= 1)
		throw Span::notEnoughSize();
	for (unsigned long i = 0; i < cpy.size() - 1; i++)
	{
		int diff = cpy[i + 1] - cpy[i];
		if (i == 0 || diff < minDiff)
			minDiff = diff;
	}
	return (minDiff);
}

int Span::longestSpan()
{
	if (vec.size() <= 1)
		throw Span::notEnoughSize();
	std::vector<int>::iterator max = std::max_element(vec.begin(), vec.end());
	std::vector<int>::iterator min = std::min_element(vec.begin(), vec.end());
	return (*max - *min);
}