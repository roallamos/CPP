/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:25:20 by rodralva          #+#    #+#             */
/*   Updated: 2024/11/06 19:31:40 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
private:
    Brain *_cat_Brain;
public:
    Cat();
    Cat(const Cat &copy);
    Cat &operator=(const Cat &copy);
    ~Cat();
    void    makeSound() const;
};

#endif