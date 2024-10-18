/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 12:12:21 by rodralva          #+#    #+#             */
/*   Updated: 2024/10/07 16:01:44 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook(void)
{
	Phonebook::current = 0;
	Phonebook::nb_contacts = 0;
	return;
}

Phonebook::~Phonebook(void)
{
	return;
}

void	Phonebook::erase_contact(void)
{
	c[current].first_name.assign("");
	c[current].last_name.assign("");
	c[current].nickname.assign("");
	c[current].phone_number.assign("");
	c[current].darkest_secret.assign("");
}

void	Phonebook::check_fields()
{
	if (c[current].first_name.empty()
		|| c[current].last_name.empty()
		|| c[current].nickname.empty()
		|| c[current].phone_number.empty()
		|| c[current].darkest_secret.empty())
		erase_contact();
	else
	{
		current++;
		if (nb_contacts != 8)
			nb_contacts++;
	}
		
}

void	Phonebook::add()
{
	if (current == 8)
		current = 0;
	std::cout << "first name: ";
	std::getline(std::cin, c[current].first_name);
	if (std::cin.eof())
		return ;
	std::cout << "last name: ";
	std::getline(std::cin, c[current].last_name);
	if (std::cin.eof())
		return ;
	std::cout << "nickname: ";
	std::getline(std::cin, c[current].nickname);
	if (std::cin.eof())
		return ;
	std::cout << "phone number: ";
	std::getline(std::cin, c[current].phone_number);
	if (std::cin.eof())
		return ;
	std::cout << "darkest secret: ";
	std::getline(std::cin, c[current].darkest_secret);
	if (std::cin.eof())
		return ;
	Phonebook::check_fields();
};

std::string	reduce_strings(std::string str)
{
	std::string	print;

	print = str.substr(0, 10);
	if (str.size() > 10)
		print.replace(9, 1, ".");
	return (print);
}

void	Phonebook::print_all_contacts(void)
{
	int			i = 0;
	
	while (i != nb_contacts)
	{
		std::cout << std::setw(10);
		std::cout << i + 1;
		std::cout << "|";
		std::cout << std::setw(10);
		std::cout << reduce_strings(c[i].first_name);
		std::cout << "|";
		std::cout << std::setw(10);
		std::cout << reduce_strings(c[i].last_name);
		std::cout << "|";
		std::cout << std::setw(10);
		std::cout << reduce_strings(c[i].nickname);
		std::cout << "|";
		std::cout << std::endl;
		i++;
	}
}


void	Phonebook::print_one_contact(void)
{
	int			to_compare;
	std::string	str;
	
	std::cout << "select a contact: ";
	std::getline(std::cin, str);
	if (std::cin.eof())
		return ;
	std::istringstream(str) >> to_compare;
	if (to_compare >= 1 && to_compare <= nb_contacts)
	{
		std::cout << "first name: " << c[to_compare - 1].first_name << std::endl;
		std::cout << "last name: " + c[to_compare - 1].last_name << std::endl;
		std::cout << "nickname: " + c[to_compare - 1].nickname << std::endl;
		std::cout << "phone number: " + c[to_compare - 1].phone_number << std::endl;
		std::cout << "darkest secret: " + c[to_compare - 1].darkest_secret << std::endl;
	}
	else
		std::cout << str + " is not a valid contact" << std::endl;
}

void	Phonebook::search()
{
	print_all_contacts();
	if (nb_contacts != 0)
		print_one_contact();
	else
		std::cout << "no contacts added" << std::endl;
}
