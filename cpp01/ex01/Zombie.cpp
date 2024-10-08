/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 10:27:47 by rodralva          #+#    #+#             */
/*   Updated: 2024/10/08 14:17:05 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void )
{
}

Zombie::Zombie(std::string name)
{
    Zombie::name = name;
}

Zombie::~Zombie()
{
    std::cout << Zombie::name << ": has been destroyed" << std::endl;
}

void    Zombie::announce( void )
{
    std::cout << Zombie::name << ": BraiiiiiiinnnzzzZ" << std::endl;
}

void    Zombie::set_name( std::string name)
{
    this->name = name;
}