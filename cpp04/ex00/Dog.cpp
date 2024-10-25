/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:24:50 by rodralva          #+#    #+#             */
/*   Updated: 2024/10/25 11:12:03 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal() 
{
    this->_type = "Dog";
    std::cout << "Dog standar constructor called\n";
}

Dog::~Dog()
{
    std::cout << "Dog destructor called\n";
}

Dog::Dog(const Dog &copy) : Animal ()
{
    std::cout << "Dog copy constructor called\n";
    (*this) = copy;
}

Dog &Dog::operator=(const Dog &copy)
{
    this->_type = copy._type;
    return (*this);
}

void   Dog::makeSound() const
{
    std::cout << this->_type << ": Guau\n";
}
