/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 19:21:50 by rodralva          #+#    #+#             */
/*   Updated: 2024/10/27 17:54:56 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    this->hp = 100;
    this->energy = 100;
    this->ad = 30;
    std::cout << "FragTrap standar constructor called\n";
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->hp = 100;
    this->energy = 100;
    this->ad = 30;
    std::cout << "FragTrap string constructor called\n";
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap()// revisar constructores de copia en erencias
{
    std::cout << "FragTrap copy constructor called\n";
    *this = copy;
}

FragTrap &FragTrap::operator=(const FragTrap &copy)
{
    if (this != &copy)
    {
        this->name = copy.name;
        this->hp = copy.hp;
        this->energy = copy.energy;
        this->ad = copy.ad;
    }
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called\n";
}

void    FragTrap::highFivesGuys()
{
    std::cout << "FragTrap is asking for a highfive.\n";
}
