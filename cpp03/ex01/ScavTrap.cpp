/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 19:21:50 by rodralva          #+#    #+#             */
/*   Updated: 2024/10/20 19:58:37 by rodralva         ###   ########.fr       */
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

/*ScavTrap::ScavTrap(ScavTrap &copy)// revisar constructores de copia en erencias
{
    std::cout << "ScavTrap copy constructor called\n";
}*/

ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
    this->name = copy.name;
    this->hp = copy.hp;
    this->energy = copy.energy;
    this->ad = copy.ad;
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called\n";
}

void    ScavTrap::guardGate()
{
    std::cout << " ScavTrap is now in Gate keeper mode.";
}
