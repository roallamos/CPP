/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 19:21:50 by rodralva          #+#    #+#             */
/*   Updated: 2024/10/23 19:31:00 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() 
{
    setEnergy(50);
    std::cout << "DiamondTrap standar constructor called\n";
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + " clap_name"), _name(name)
{
    setEnergy(50);
    std::cout << "DiamondTrap string constructor called\n";
}


DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ClapTrap(copy), ScavTrap(copy), FragTrap(copy)
{
    std::cout << "DiamondTrap copy constructor called\n";
    *this = copy;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &copy)
{
    if (this != &copy)
    {
        setName(copy.getName());
        setEnergy(copy.getEnergy());
        setAd(copy.getAd());
        setHp(copy.getHp());
    }
    return (*this);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor called\n";
}

void    DiamondTrap::whoAmI()
{
    std::cout << "DiamondTap -> "<<this->_name << "\nClapTap -> "<< ClapTrap::getName() << std::endl;
}

void    DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}
