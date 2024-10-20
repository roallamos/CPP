/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 15:22:07 by rodralva          #+#    #+#             */
/*   Updated: 2024/10/20 17:05:44 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0)
{
}

Point::Point(Fixed const x, Fixed const y) : x(x), y(y)
{
}


Point::Point(const Point &p)
{
    (*this) = p;
}

Point &Point::operator=(const Point &copy)
{
    this->x = copy.getX();
    this->y = copy.getY();
    return (*this);
}

Fixed   Point::getX() const
{
    return (x);
}

Fixed   Point::getY() const
{
    return (y);
}

Point::~Point()
{
}