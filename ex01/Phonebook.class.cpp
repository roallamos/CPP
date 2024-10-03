/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 12:12:21 by rodralva          #+#    #+#             */
/*   Updated: 2024/10/03 10:58:40 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"

Phonebook::Phonebook(void)
{
	Phonebook::current = 0;
	return;
}

Phonebook::~Phonebook(void)
{
	std::cout << "Phonebook destructor has been called" << std::endl;
	return;
}