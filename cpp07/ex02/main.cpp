/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roallamos <roallamos@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 15:36:03 by rodralva          #+#    #+#             */
/*   Updated: 2025/02/11 11:00:14 by roallamos        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
	std::cout << BLUE "INT TEST\n" NC;
	try
	{	
		Array<int>	a(11);
		for (int i = 0; i < 10; i++){
			a[i] = i + 1;
			std::cout << a[i] << std::endl;
		}
		std::cout << "size " << a.size() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << BLUE "\nDOUBLE TEST\n" NC;
	try
	{	
		Array<double>	a(11);
		for (int i = 0; i < 10; i++){
			a[i] = i + 0.5f;
			std::cout << a[i] << std::endl;
		}
		std::cout << "size " << a.size() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << BLUE "\nCHAR TEST\n" NC;
	try
	{	
		Array<char>	a(11);
		for (int i = 0; i < 10; i++){
			a[i] = i + 65;
			std::cout << a[i] << std::endl;
		}
		std::cout << "size " << a.size() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << BLUE "\nCOPY TEST\n" NC;
	try
	{	
		Array<char>	a(11);
		for (int i = 0; i < 10; i++){
			a[i] = i + 65;
			std::cout << a[i] << std::endl;
		}
		Array<char>	b = a;
		for (int i = 0; i < 10; i++){
			a[i] = i + 66;
			std::cout << "a: "<< a[i] << "b: " << b[i] << std::endl;
		}
		std::cout << "size a: " << a.size() << std::endl;
		std::cout << "size b: " << b.size() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}