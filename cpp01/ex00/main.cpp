/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 10:27:18 by rodralva          #+#    #+#             */
/*   Updated: 2024/10/13 13:04:07 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *test_zombie;

    test_zombie = newZombie("Pedro");
    test_zombie->announce();
    randomChump("Migui");
    delete test_zombie;
    return (0);
}