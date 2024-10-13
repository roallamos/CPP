/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 10:27:18 by rodralva          #+#    #+#             */
/*   Updated: 2024/10/13 13:02:07 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

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