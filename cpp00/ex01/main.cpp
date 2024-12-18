/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 12:15:31 by rodralva          #+#    #+#             */
/*   Updated: 2024/10/07 16:03:11 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int	main(void)
{
	Phonebook	contact_list;
	std::string	input;
	
	while (input != "EXIT" && !std::cin.eof())
	{
		std::cout << "INSERT COMMAND (ADD, SEARCH, EXIT): ";
		std::getline(std::cin, input);
		if (input == "ADD")
			contact_list.add();
		else if (input == "SEARCH")
			contact_list.search();
	}
	std::cout << "closing phonebook..." << std::endl;
	return (0);
}
