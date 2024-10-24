/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:25:14 by rodralva          #+#    #+#             */
/*   Updated: 2024/10/24 19:46:54 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
    this->_type = "Cat";
    std::cout << "Cat standar constructor called\n";
}

Cat::~Cat()
{
    std::cout << "Cat destructor called\n";
}

Cat::Cat(const Cat &copy) : Animal()
{
    std::cout << "Cat copy constructor called\n";
    (*this) = copy;
}

Cat &Cat::operator=(const Cat &copy)
{
    this->_type = copy._type;
    return (*this);
}

void    Cat::makeSound()
{
    std::cout << this->_type << ": Miau\n";
}
