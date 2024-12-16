/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:24:50 by rodralva          #+#    #+#             */
/*   Updated: 2024/12/16 19:38:48 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal() , _dog_Brain(new Brain)
{
    this->_type = "Dog";
    std::cout << "Dog standar constructor called\n";
}

Dog::~Dog()
{
    delete this->_dog_Brain;
    std::cout << "Dog destructor called\n";
}

Dog::Dog(const Dog &copy) : Animal(), _dog_Brain(new Brain)
{
    std::cout << "Dog copy constructor called\n";
    (*this) = copy;
}

Dog& Dog::operator=(const Dog &copy)
{
    if (this != &copy) 
    {
        Brain* newBrain = new Brain(*copy._dog_Brain); 
        delete _dog_Brain;
        _dog_Brain = newBrain;
        _type = copy._type;
    }
    return *this;
}


void   Dog::makeSound() const
{
    std::cout << this->_type << ": Guau\n";
}

void Dog::setIdeas(std::string idea)
{
    this->_dog_Brain->setIdeas(idea);
}
void Dog::printIdeas()
{
    this->_dog_Brain->printIdeas();
}