/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 10:43:10 by rodralva          #+#    #+#             */
/*   Updated: 2024/10/15 15:00:56 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    functions[0] = &Harl::debug;
    functions[1] = &Harl::info;
    functions[2] = &Harl::warning;
    functions[3] = &Harl::error;
}

Harl::~Harl()
{
}

void    Harl::debug( void )
{
    std::cout  << "debug\n";
}

void    Harl::info( void )
{
    std::cout << "info\n";
}

void    Harl::warning( void )
{
    std::cout << "warning\n";
}

void    Harl::error( void )
{
    std::cout << "error\n";
}

void    Harl::execute_Harl(void   (Harl::*f)())
{
    (this->*f)();
}

void    Harl::complain(std::string level)
{
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;
    
    while (i < 4)
    {
        if (levels[i] == level)
            execute_Harl(functions[i]);
        i++;
    }
}