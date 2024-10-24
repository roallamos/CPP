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

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
    this->hp = FragTrap::hp;
    this->energy = ScavTrap::energy;
    this->ad = FragTrap::ad;
    std::cout << "DiamondTrap standar constructor called\n";
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + " clap_name"), ScavTrap(name + " clap_name"), FragTrap(name + " clap_name"), _name(name)
{
    std::cout << "C" << ClapTrap::name << " " <<  ClapTrap::hp << " " << ClapTrap::energy << " " <<  ClapTrap::ad << std::endl;
    std::cout << "F" << FragTrap::name << " " <<  FragTrap::hp << " " << FragTrap::energy << " " <<  FragTrap::ad << std::endl;
    std::cout << "S" << ScavTrap::name << " " <<  ScavTrap::hp << " " << ScavTrap::energy << " " <<  ScavTrap::ad << std::endl;
    this->hp = FragTrap::hp;
    this->energy = ScavTrap::energy;
    this->ad = FragTrap::ad;
    std::cout << this->_name << " " <<  this->hp << " " << this->energy << " " <<  FragTrap::ad << std::endl;
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
        this->name = copy.name;
        this->hp = copy.hp;
        this->energy = copy.energy;
        this->ad = copy.ad;
    }
    return (*this);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor called\n";
}

void    DiamondTrap::whoAmI()
{
    std::cout << this->name << " wondering who he is\n";
}

/*void    DiamondTrap::attack(const std::string &target)
{
    if (this->energy > 0 && this->hp > 0)
    {
        this->energy -= 1;
        std::cout << "DiamondTrap "
        << this->name << " attacks "
        << target << ", causing "
        << this->ad << " points of damage!" << std::endl;
    }
    else
        std::cout << this->name << " can not attack" << std::endl;
}*/
