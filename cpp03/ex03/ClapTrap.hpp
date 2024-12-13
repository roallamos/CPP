/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 17:56:39 by rodralva          #+#    #+#             */
/*   Updated: 2024/12/13 16:49:11 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
private:
    std::string name;
    unsigned int         hp;
    unsigned int         energy;
    unsigned int         ad;
public:
    ClapTrap();
    ClapTrap(const ClapTrap &copy);
    ClapTrap(std::string);
    ClapTrap &operator=(const ClapTrap &);
    ~ClapTrap();
    std::string    getName() const;
    unsigned int    getHp() const;
    unsigned int    getEnergy() const;
    unsigned int    getAd() const;
    void    setName(std::string);
    void    setHp(unsigned int);
    void    setEnergy(unsigned int);
    void    setAd(unsigned int);
    virtual void    attack(const std::string &target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
};

#endif