/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 15:18:56 by rodralva          #+#    #+#             */
/*   Updated: 2024/10/20 17:05:51 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
private:
    Fixed  x;
    Fixed  y;
public:
    Point();
    Point(Fixed const, Fixed const);
    Point(const Point &);
    Point &operator=(const Point &);
    Fixed getX() const;
    Fixed getY() const;
    ~Point();
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif