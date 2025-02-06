#include "test.hpp"
#include <iostream>

// CONSTRUCTORS AND DESTRUCTORS-------------------------------------------------
test::test(void)
{
}

test::test(test const& other)
{
	*this = other;
}

test::~test(void)
{
}

// OPERATORS--------------------------------------------------------------------
test& test::operator=(test const& other)
{
	if (this == &other) {
		return *this;
	}
	this->i  = other.getI();
	return *this;
}

std::ostream	&operator<<(std::ostream &os, const test &other)
{
	os << other.getI();
	return (os);
}

// METHODS AND MEMBER FUNCTIONS-------------------------------------------------

int	test::getI() const
{
	return  (i);
}

void	test::setI(int x)
{
	i = x;
}