/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 19:21:53 by rodralva          #+#    #+#             */
/*   Updated: 2024/10/23 19:08:48 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
    ScavTrap();
    ScavTrap(const ScavTrap &);
    ScavTrap(std::string);
    ScavTrap &operator=(const ScavTrap &);
    ~ScavTrap();

    void    guardGate();
    void    attack(const std::string &target);
};



#endif