/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 10:27:35 by rodralva          #+#    #+#             */
/*   Updated: 2024/10/13 13:03:45 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
private:
    std::string name;
public:
    Zombie(std::string);
    ~Zombie();
    void    announce( void );
};

Zombie  *newZombie(std::string name);
void    randomChump(std::string name);

#endif