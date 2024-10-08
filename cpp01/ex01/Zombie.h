/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:05:37 by rodralva          #+#    #+#             */
/*   Updated: 2024/10/08 12:33:44 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_H
# define ZOMBIE_H

# include "Zombie.hpp"

Zombie  *newZombie(std::string name);
void    randomChump(std::string name);
Zombie *zombieHorde( int N, std::string name );

#endif
