/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 17:56:42 by rodralva          #+#    #+#             */
/*   Updated: 2024/10/23 19:30:17 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    ScavTrap a("perro");
    ClapTrap b("gato");
    FragTrap c("perro");

    a.attack(b.getName());
    b.takeDamage(a.getAd());
    b.beRepaired(10);
    a.takeDamage(100);
    a.attack(b.getName());
    c.attack(a.getName());
    a.takeDamage(c.getAd());
    c.highFivesGuys();
    return (0);
}