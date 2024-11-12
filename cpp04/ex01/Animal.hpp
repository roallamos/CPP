/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:13:30 by rodralva          #+#    #+#             */
/*   Updated: 2024/10/25 14:27:14 by rodralva         ###   ########.fr       */
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
    virtual ~Animal();
    std::string getType() const;
    virtual void    makeSound() const;
};

#endif