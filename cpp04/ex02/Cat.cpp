/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:25:14 by rodralva          #+#    #+#             */
/*   Updated: 2024/12/16 19:36:43 by rodralva         ###   ########.fr       */
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

Cat::Cat(const Cat &copy) : Animal() , _cat_Brain(new Brain)
{
    std::cout << "Cat copy constructor called\n";
    (*this) = copy;
}

Cat& Cat::operator=(const Cat &copy)
{
    if (this != &copy) 
    {
        Brain* newBrain = new Brain(*copy._cat_Brain); 
        delete _cat_Brain;
        _cat_Brain = newBrain;
        _type = copy._type;
    }
    return *this;
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