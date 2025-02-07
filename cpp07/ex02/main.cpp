/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 15:36:03 by rodralva          #+#    #+#             */
/*   Updated: 2025/02/07 10:19:50 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
	std::cout << BLUE "INT TEST\n" NC;
	try
	{	
		Array<int>	a(10);
		for (int i = 0; i < 10; i++){
			a[i] = i;
			std::cout << a[i] << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << BLUE "\nDOUBLE TEST\n" NC;
	try
	{	
		Array<double>	a(10);
		for (int i = 0; i < 10; i++){
			a[i] = i + 0.5f;
			std::cout << a[i] << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << BLUE "\nCHAR TEST\n" NC;
	try
	{	
		Array<char>	a(10);
		for (int i = 0; i < 10; i++){
			a[i] = i + 65;
			std::cout << a[i] << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << BLUE "\nCOPY TEST\n" NC;
	try
	{	
		Array<char>	a(10);
		for (int i = 0; i < 10; i++){
			a[i] = i + 65;
			std::cout << a[i] << std::endl;
		}
		Array<char>	b = a;
		for (int i = 0; i < 10; i++){
			a[i] = i + 66;
			std::cout << "a: "<< a[i] << "b: " << b[i] << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}