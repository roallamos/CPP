/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:21:22 by rodralva          #+#    #+#             */
/*   Updated: 2024/10/14 12:21:23 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon_a) : name(name) , weapon_a(weapon_a)
{
}

HumanA::~HumanA()
{
}

void    HumanA::attack()
{
    std::cout << name << " attacks whith their weapon " 
                    << weapon_a.getType() << std::endl;
}