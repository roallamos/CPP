/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:15:17 by rodralva          #+#    #+#             */
/*   Updated: 2024/10/25 11:05:45 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain standar constructor called\n";
}

Brain::~Brain()
{
    std::cout << "Brain destructor called\n";
}

Brain::Brain(const Brain &copy)
{
    std::cout << "Brain copy constructor called\n";
    (*this) = copy;
}

Brain &Brain::operator=(const Brain &copy)
{
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = copy._ideas[i];
    return (*this);
}

void Brain::setIdeas(std::string idea)
{
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = idea;
}
void Brain::printIdeas() const
{
    for (int i = 0; i < 100; i++)
        std::cout << this->_ideas[i] << std::endl;
}