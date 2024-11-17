/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 10:27:47 by rodralva          #+#    #+#             */
/*   Updated: 2024/11/17 11:37:00 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    Zombie::name = name;
    std::cout << Zombie::name << ": has been created" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << Zombie::name << ": has been destroyed" << std::endl;
}

void    Zombie::announce( void )
{
    std::cout << Zombie::name << ": BraiiiiiiinnnzzzZ" << std::endl;
}