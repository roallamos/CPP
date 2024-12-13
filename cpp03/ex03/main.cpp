/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 17:56:42 by rodralva          #+#    #+#             */
/*   Updated: 2024/12/13 18:00:41 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
    ScavTrap a("araña");
    ClapTrap b("gato");
    FragTrap c("rata");
    DiamondTrap d("perro");

    a.attack(b.getName());
    b.takeDamage(a.getAd());
    b.beRepaired(10);
    a.takeDamage(100);
    a.attack(b.getName());
    c.attack(a.getName());
    a.takeDamage(c.getAd());
    c.highFivesGuys();
    d.attack("rata");
    d.guardGate();
    d.highFivesGuys();
    d.whoAmI();
    return (0);
}