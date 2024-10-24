/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:47:16 by rodralva          #+#    #+#             */
/*   Updated: 2024/10/24 19:48:46 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
    Animal  a;
    Cat     b;
    Dog     c;
    
    a.makeSound();
    b.makeSound();
    c.makeSound();
    return (0);
}