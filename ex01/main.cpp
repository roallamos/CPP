/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 12:15:31 by rodralva          #+#    #+#             */
/*   Updated: 2024/10/03 10:05:29 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"

int	main(void)
{
	Phonebook	contact_list;
	std::string	input;
	
	while (input != "EXIT")
	{
		std::getline(std::cin, input);
		if (input == "ADD")
			contact_list.add();
	}
	return (0);
}
