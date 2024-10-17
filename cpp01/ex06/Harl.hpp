/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 10:43:13 by rodralva          #+#    #+#             */
/*   Updated: 2024/10/17 10:21:46 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl
{
private:
    void    debug( void );
    void    info( void );
    void    warning( void );
    void    error( void );
public:
    Harl();
    ~Harl();
    void    complain(std::string);
    void    (Harl::*functions[4])();
    void    execute_Harl(void   (Harl::*f)());
};

void    harl_filter(std::string level);

#endif