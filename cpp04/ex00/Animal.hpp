/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:13:30 by rodralva          #+#    #+#             */
/*   Updated: 2024/10/25 11:06:20 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
protected:
    std::string _type;
public:
    Animal();
    Animal(const Animal &copy);
    Animal &operator=(const Animal &copy);
    ~Animal();
    std::string getType() const;
    virtual void    makeSound() const;
};

#endif