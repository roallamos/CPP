/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:25:14 by rodralva          #+#    #+#             */
/*   Updated: 2024/10/25 15:17:28 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal() , _cat_Brain(new Brain)
{
    this->_type = "Cat";
    std::cout << "Cat standar constructor called\n";
}

Cat::~Cat()
{
    //for (int i = 0; i < 100; i++)
    delete this->_cat_Brain;   
    std::cout << "Cat destructor called\n";
}

Cat::Cat(const Cat &copy) : Animal()
{
    std::cout << "Cat copy constructor called\n";
    this->_cat_Brain = new Brain;
    (*this) = copy;
}

Cat &Cat::operator=(const Cat &copy)
{
    this->_type = copy._type;
    
    return (*this);
}

void    Cat::makeSound() const
{
    std::cout << this->_type << ": Miau\n";
}
