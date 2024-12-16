/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:25:20 by rodralva          #+#    #+#             */
/*   Updated: 2024/12/16 19:09:16 by rodralva         ###   ########.fr       */
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
    virtual ~Cat();

    void    setIdeas(std::string idea);
    void    printIdeas();    
    void    makeSound() const;
};

#endif