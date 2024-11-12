/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:25:05 by rodralva          #+#    #+#             */
/*   Updated: 2024/10/25 11:57:15 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
private:
    Brain *_dog_Brain;
public:
    Dog();
    Dog(const Dog &copy);
    Dog &operator=(const Dog &copy);
    ~Dog();
    void    makeSound() const;
};

#endif