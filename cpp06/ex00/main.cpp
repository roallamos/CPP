/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 17:57:02 by rodralva          #+#    #+#             */
/*   Updated: 2025/01/30 16:07:11 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Wrong number of arguments\n";
		return (1);
	}
	std::string	str;
	str = argv[1];
	ScalarConverter::convert(str);
	return (0);
}