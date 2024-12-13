/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 19:21:50 by rodralva          #+#    #+#             */
/*   Updated: 2024/12/13 17:51:40 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    ClapTrap::setHp(100);
    ClapTrap::setEnergy(100);
    ClapTrap::setAd(30);
    std::cout << "FragTrap standar constructor called\n";
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    ClapTrap::setHp(100);
    ClapTrap::setEnergy(100);
    ClapTrap::setAd(30);
    std::cout << "FragTrap string constructor called\n";
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap()
{
    std::cout << "FragTrap copy constructor called\n";
    *this = copy;
}

FragTrap &FragTrap::operator=(const FragTrap &copy)
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

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called\n";
}

void    FragTrap::highFivesGuys()
{
    std::cout << "FragTrap is asking for a highfive.\n";
}
