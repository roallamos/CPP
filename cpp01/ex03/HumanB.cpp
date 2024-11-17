/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:21:17 by rodralva          #+#    #+#             */
/*   Updated: 2024/11/17 12:34:26 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name)
{
    std::cout << "HumanB constructor called\n";
}

HumanB::~HumanB()
{
    std::cout << "HumanB destructor called\n";
}

void    HumanB::attack()
{
    std::cout << name << " attacks whith their weapon " 
                    << weapon_b.getType() << std::endl;
}

void    HumanB::setWeapon(Weapon Weapon_b)
{
    this->weapon_b = Weapon_b;
}