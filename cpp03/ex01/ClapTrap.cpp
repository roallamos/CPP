/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 17:56:37 by rodralva          #+#    #+#             */
/*   Updated: 2024/10/20 19:51:08 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : hp(10), energy(10), ad(0)
{
    std::cout << "standar ClapTrap constructor called\n";
}

ClapTrap::ClapTrap(std::string name) : name(name), hp(10), energy(10), ad(0)
{
    std::cout << "ClapTrap string constructor called\n";
}

ClapTrap::ClapTrap(ClapTrap &copy) : name(copy.name), hp(copy.hp), energy(copy.energy), ad(copy.ad)
{
    std::cout << "ClapTrap copy constructor called\n";
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
    this->name = copy.name;
    this->hp = copy.hp;
    this->energy = copy.energy;
    this->ad = copy.ad;
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called\n";
}

void    ClapTrap::attack(const std::string &target)
{
    if (this->energy > 0 && this->hp > 0)
    {
        this->energy -= 1;
        std::cout << "ClapTrap "
        << this->name << " attacks "
        << target << ", causing "
        << this->ad << " points of damage!" << std::endl;
    }
    else
        std::cout << this->name << " can not attack" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hp > amount)
        this->hp -= amount;
    else
        this->hp = 0;
    std::cout << "ClapTrap "
    << this->name << " lost "
    << amount << " hp. "
    << this->name << " has " 
    << this->hp << " hp left" << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->energy > 0 && this->hp > 0)
    {
        this->energy -= 1;
        this->hp += amount;
        std::cout << "ClapTrap "
        << this->name << " repaired "
        << amount << " hp. "
        << this->name << " has " 
        << this->hp << " hp left" << std::endl;
    }
    else
        std::cout << this->name << " can not be repaired" << std::endl;
}

std::string    ClapTrap::getName() const
{
    return (this->name);
}

int   ClapTrap::getAd() const
{
    return (this->ad);
}