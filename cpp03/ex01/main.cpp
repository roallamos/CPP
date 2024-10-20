/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 17:56:42 by rodralva          #+#    #+#             */
/*   Updated: 2024/10/20 19:58:03 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap a("perro");
    ClapTrap b("gato");

    a.attack(b.getName());
    b.takeDamage(a.getAd());
    b.beRepaired(10);
    a.takeDamage(100);
    a.attack(b.getName());
    return (0);
}