/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 19:21:50 by rodralva          #+#    #+#             */
/*   Updated: 2024/10/23 19:31:12 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    this->hp = 100;
    this->energy = 50;
    this->ad = 20;
    std::cout << "ScavTrap standar constructor called\n";
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->hp = 100;
    this->energy = 50;
    this->ad = 20;
    std::cout << "ScavTrap string constructor called\n";
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap()// revisar constructores de copia en erencias
{
    std::cout << "ScavTrap copy constructor called\n";
    *this = copy;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
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

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called\n";
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode.\n";
}

void    ScavTrap::attack(const std::string &target)
{
    if (this->energy > 0 && this->hp > 0)
    {
        this->energy -= 1;
        std::cout << "ScavTrap "
        << this->name << " attacks "
        << target << ", causing "
        << this->ad << " points of damage!" << std::endl;
    }
    else
        std::cout << this->name << " can not attack" << std::endl;
}
