/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 12:03:47 by rodralva          #+#    #+#             */
/*   Updated: 2024/10/03 10:56:21 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include  "Contact.class.hpp"

class	Phonebook
{
private:
	int	current;
 	Contact c[8];
public:
	
	Phonebook(void);
	~Phonebook(void);
	
	void add(void)
	{
		if (current == 8)
			current = 0;
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

};

#endif
