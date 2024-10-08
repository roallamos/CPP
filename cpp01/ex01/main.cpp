/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 10:27:18 by rodralva          #+#    #+#             */
/*   Updated: 2024/10/08 14:10:49 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "Zombie.h"

int main(void)
{
    Zombie *test_zombie;

    test_zombie = newZombie("Pedro");
    test_zombie->announce();
    delete test_zombie;
    test_zombie = zombieHorde(5, "Migui");
    int i = 0;
    while (i < 5)
        test_zombie[i++].announce();
    delete [] test_zombie;
    return (0);
}