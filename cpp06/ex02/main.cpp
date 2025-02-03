/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 16:08:57 by rodralva          #+#    #+#             */
/*   Updated: 2025/02/03 17:46:15 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <stdlib.h>
#include <stdio.h>

Base *generate(void)
{
	std::srand(time(0));
	int nb = std::rand() % 3;
	if (nb == 0)
		return (new A);
	else if (nb == 1)
		return (new B);
	else if (nb == 2)
		return (new C);
	return (NULL);
}

void	identify(Base *p)
{
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "type A\n";
	else if (dynamic_cast<B *>(p) != NULL)
		std::cout << "type B\n";
	else if (dynamic_cast<C *>(p) != NULL)
		std::cout << "type C\n";
}

void	identify(Base &p)
{
	try
	{
		A	a = dynamic_cast<A &>(p);
		std::cout << "type A\n";
	}
	catch(const std::exception& e)
	{
		try
		{
			B	b = dynamic_cast<B &>(p);
			std::cout << "type B\n";
		}
		catch(const std::exception& e)
		{
			try
			{
				C	c = dynamic_cast<C &>(p);
				std::cout << "type C\n";
			}
			catch(const std::exception& e)
			{
				std::cout << e.what();
			}	
		}
	}	
}

int main(void)
{
	Base	*p;
	C		a;

	p = generate();
	identify(p);
	identify(a);
	return (0);
}