/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:47:16 by rodralva          #+#    #+#             */
/*   Updated: 2024/12/16 17:10:45 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
Dog perro;
Dog copy;

perro.setIdeas("⚽");
copy = perro;
std::cout << "--------ideas perro--------\n";
perro.printIdeas();
std::cout << "--------ideas copy--------\n";
copy.printIdeas();
copy.setIdeas("pelota");
std::cout << "--------ideas perro--------\n";
perro.printIdeas();
std::cout << "--------ideas copy--------\n";
copy.printIdeas();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();
delete i;
delete j;
delete meta;
return (0);
}