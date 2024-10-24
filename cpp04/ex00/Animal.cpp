/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:15:17 by rodralva          #+#    #+#             */
/*   Updated: 2024/10/24 19:54:27 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
    std::cout << "Animal standar constructor called\n";
}

Animal::~Animal()
{
    std::cout << "Animal destructor called\n";
}

Animal::Animal(const Animal &copy)
{
    std::cout << "Animal copy constructor called\n";
    (*this) = copy;
}

Animal &Animal::operator=(const Animal &copy)
{
    this->_type = copy._type;
    return (*this);
}

std::string Animal::getType()
{
    return (this->_type);
}

void    Animal::makeSound()
{
    std::cout << this->_type << ": ...\n";
}
