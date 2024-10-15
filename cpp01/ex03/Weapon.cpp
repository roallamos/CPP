/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:21:09 by rodralva          #+#    #+#             */
/*   Updated: 2024/10/14 12:21:10 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(std::string type)
{
    Weapon::setType(type);
}

Weapon::~Weapon()
{
}

const std::string &Weapon::getType()
{
    return (type);
}

void    Weapon::setType(std::string type)
{
    this->type = type;
}