/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:25:05 by rodralva          #+#    #+#             */
/*   Updated: 2024/12/16 15:57:13 by rodralva         ###   ########.fr       */
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

    void    setIdeas(std::string idea);
    void    printIdeas();    
    void    makeSound() const;
};

#endif