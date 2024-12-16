/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:25:14 by rodralva          #+#    #+#             */
/*   Updated: 2024/12/16 16:20:23 by rodralva         ###   ########.fr       */
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
    delete this->_cat_Brain;   
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
    delete this->_cat_Brain;
    this->_cat_Brain = new Brain(*copy._cat_Brain);
    return (*this);
}

void    Cat::makeSound() const
{
    std::cout << this->_type << ": Miau\n";
}

void Cat::setIdeas(std::string idea)
{
    this->_cat_Brain->setIdeas(idea);
}
void Cat::printIdeas()
{
    this->_cat_Brain->printIdeas();
}