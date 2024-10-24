/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 10:56:25 by rodralva          #+#    #+#             */
/*   Updated: 2024/10/23 15:25:03 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): nb_value(0)
{
}

Fixed::Fixed(Fixed &copy)
{
    this->nb_value = copy.nb_value;
}

Fixed& Fixed::operator=(Fixed &copy)
{
    this->nb_value = copy.getRawBits();
    return (*this);
}

int Fixed::getRawBits() const
{
    return (this->nb_value);
}

void Fixed::setRawBits( int const raw )
{
    this->nb_value = raw;
}

Fixed::~Fixed()
{
}