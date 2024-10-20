/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 15:52:48 by rodralva          #+#    #+#             */
/*   Updated: 2024/10/20 17:27:19 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed dab;
    Fixed dbc;
    Fixed dca;

    dab = (b.getY() - a.getY()) * point.getX() - (b.getX() - a.getX()) * point.getY() + (b.getX() * a.getY() - a.getX() * b.getY());
    dbc = (c.getY() - b.getY()) * point.getX() - (c.getX() - b.getX()) * point.getY() + (c.getX() * b.getY() - b.getX() * c.getY());
    dca = (a.getY() - c.getY()) * point.getX() - (a.getX() - c.getX()) * point.getY() + (a.getX() * c.getY() - c.getX() * a.getY());
    if (dab <= 0 && dbc <= 0 && dca <= 0)
        return (1);
    else if (dab >= 0 && dbc >= 0 && dca >= 0)
        return (1);
    else
        return (0);
}