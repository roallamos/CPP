/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 12:12:21 by rodralva          #+#    #+#             */
/*   Updated: 2024/10/04 18:52:15 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"

Phonebook::Phonebook(void)
{
	Phonebook::current = 0;
	Phonebook::nb_contacts = 0;
	return;
}

Phonebook::~Phonebook(void)
{
	std::cout << "Phonebook destructor has been called" << std::endl;
	return;
}

void	Phonebook::add()
{
	if (current == 8)
		current = 0;
	if (nb_contacts != 8)
		nb_contacts++;
	std::cout << "first name: ";
	std::getline(std::cin, c[current].first_name);
	std::cout << "last name: ";
	std::getline(std::cin, c[current].last_name);
	std::cout << "nickname: ";
	std::getline(std::cin, c[current].nickname);
	std::cout << "phone number: ";
	std::getline(std::cin, c[current].phone_number);
	std::cout << "darkest secret: ";
	std::getline(std::cin, c[current].darkest_secret);
	current++;
};

void	Phonebook::print_all_contacts(void)
{
	int			i = 0;
	
	while (i != nb_contacts)
	{
		std::cout << i + 1;
		std::cout << " | ";
		std::cout << c[i].first_name;
		std::cout << " | ";
		std::cout << c[i].last_name;
		std::cout << " | ";
		std::cout << c[i].nickname;
		std::cout << std::endl;
		i++;
	}
}


void	Phonebook::print_one_contact(void)
{
	int			to_compare;
	std::string	str;
	
	std::getline(std::cin, str);
	std::istringstream(str) >> to_compare;
	if (to_compare >= 1 && to_compare <= nb_contacts)
	{
		std::cout << "first name: " << c[to_compare - 1].first_name << std::endl;
		std::cout << "last name: " + c[to_compare - 1].last_name << std::endl;
		std::cout << "nickname: " + c[to_compare - 1].nickname << std::endl;
		std::cout << "phone number: " + c[to_compare - 1].phone_number << std::endl;
		std::cout << "darkest secret: " + c[to_compare - 1].darkest_secret << std::endl;
	}
}

void	Phonebook::search()
{

	print_all_contacts();
	print_one_contact();
}