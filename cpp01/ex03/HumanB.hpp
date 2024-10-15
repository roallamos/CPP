/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:21:14 by rodralva          #+#    #+#             */
/*   Updated: 2024/10/14 12:21:15 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
private:
    Weapon weapon_b;
    std::string name;
public:
    HumanB(std::string);
    ~HumanB();
    void    attack();
    void    setWeapon(Weapon);
};

#endif