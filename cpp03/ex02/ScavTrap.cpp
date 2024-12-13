/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 19:21:50 by rodralva          #+#    #+#             */
/*   Updated: 2024/12/13 17:49:15 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    ClapTrap::setHp(100);
    ClapTrap::setEnergy(50);
    ClapTrap::setAd(20);
    std::cout << "ScavTrap standar constructor called\n";
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    ClapTrap::setHp(100);
    ClapTrap::setEnergy(50);
    ClapTrap::setAd(20);
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
        ClapTrap::setName(copy.getName());
        ClapTrap::setHp(copy.getHp());
        ClapTrap::setEnergy(copy.getEnergy());
        ClapTrap::setAd(copy.getAd());
    }
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

void    ScavTrap::attack(const std::string &target)
{
    if (ClapTrap::getEnergy() > 0 && ClapTrap::getHp() > 0)
    {
        ClapTrap::setEnergy(ClapTrap::getEnergy() - 1);
        std::cout << "ScavTrap "
        << ClapTrap::getName() << " attacks "
        << target << ", causing "
        << ClapTrap::getAd() << " points of damage!" << std::endl;
    }
    else
        std::cout << ClapTrap::getName() << " can not attack" << std::endl;
}
