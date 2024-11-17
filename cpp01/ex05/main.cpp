/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 10:43:16 by rodralva          #+#    #+#             */
/*   Updated: 2024/11/17 15:38:22 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
    Harl    complainer;
    
    complainer.complain("DEBUG");
    complainer.complain("INFO");
    complainer.complain("WARNING");
    complainer.complain("ERROR");
    complainer.complain("");
    return (0);
}