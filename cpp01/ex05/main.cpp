/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 10:43:16 by rodralva          #+#    #+#             */
/*   Updated: 2024/10/15 14:59:14 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
    Harl    billie;
    
    billie.complain("DEBUG");
    billie.complain("INFO");
    billie.complain("WARNING");
    billie.complain("ERROR");
    billie.complain("");
    return (0);
}