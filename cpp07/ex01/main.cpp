/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 18:42:00 by rodralva          #+#    #+#             */
/*   Updated: 2025/02/06 11:40:32 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include "test.hpp"

int main(void)
{
	int		nb[100];
	char	c[100];
	test	t[100];
	
	for (int i = 0; i < 100; i++)
	{
		nb[i] = i;	
		c[i] = i;
		t[i].setI(i);
	}
	std::cout << "int\n";
	::iter(nb, 100, ::f);
	std::cout << "--------\nchar\n";
	::iter(c, 100, ::f);
	std::cout << "--------\nclass\n";
	::iter(t, 100, ::f);
}