/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 12:59:26 by rodralva          #+#    #+#             */
/*   Updated: 2024/10/20 17:26:58 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void ) {
Point   a(0,0);
Point   b(1,2);
Point   c(2,0);
Point   p(3,2);
if (bsp(a, b, c, p))
    std::cout << "dentro\n";
else
    std::cout << "fuera\n";
return (0);
}