/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:21:20 by rodralva          #+#    #+#             */
/*   Updated: 2024/10/14 12:21:21 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
class HumanA
{
private:
    std::string name;
    Weapon &weapon_a;
public:
    HumanA(std::string, Weapon&);
    ~HumanA();
    void    attack();
};

#endif