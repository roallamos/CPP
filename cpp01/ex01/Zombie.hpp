/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 10:27:35 by rodralva          #+#    #+#             */
/*   Updated: 2024/10/13 13:01:30 by rodralva         ###   ########.fr       */
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
    Zombie();
    Zombie(std::string);
    ~Zombie();
    void    announce( void );
    void    set_name( std::string );
};

Zombie  *newZombie(std::string name);
void    randomChump(std::string name);
Zombie *zombieHorde( int N, std::string name );

#endif