/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:25:14 by rodralva          #+#    #+#             */
/*   Updated: 2024/10/25 11:23:47 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    this->_type = "WrongCat";
    std::cout << "WrongCat standar constructor called\n";
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called\n";
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal()
{
    std::cout << "WrongCat copy constructor called\n";
    (*this) = copy;
}

WrongCat &WrongCat::operator=(const WrongCat &copy)
{
    this->_type = copy._type;
    return (*this);
}

void    WrongCat::makeSound() const
{
    std::cout << this->_type << ": Miau\n";
}
