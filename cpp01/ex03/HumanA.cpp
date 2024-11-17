/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:21:22 by rodralva          #+#    #+#             */
/*   Updated: 2024/11/17 12:33:26 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon_a) : name(name) , weapon_a(weapon_a)
{
    std::cout << "HumanA constructor called\n";
}

HumanA::~HumanA()
{
    std::cout << "HumanA destructor called\n";
}

void    HumanA::attack()
{
    std::cout << name << " attacks whith their weapon " 
                    << weapon_a.getType() << std::endl;
}