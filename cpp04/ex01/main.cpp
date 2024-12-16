/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:47:16 by rodralva          #+#    #+#             */
/*   Updated: 2024/12/16 19:32:18 by rodralva         ###   ########.fr       */
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

perro.setIdeas("⚽");
Dog copy(perro);
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