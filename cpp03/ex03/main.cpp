/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 17:56:42 by rodralva          #+#    #+#             */
/*   Updated: 2024/10/24 16:34:19 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
    /*ScavTrap a("perro");
    ClapTrap b("gato");
    FragTrap c("perro");*/
    DiamondTrap d("perro");

    /*a.attack(b.getName());
    b.takeDamage(a.getAd());
    b.beRepaired(10);
    a.takeDamage(100);
    a.attack(b.getName());
    c.attack(a.getName());
    a.takeDamage(c.getAd());
    c.highFivesGuys();*/
    d.attack("perro");
    d.guardGate();
    d.highFivesGuys();
    return (0);
}