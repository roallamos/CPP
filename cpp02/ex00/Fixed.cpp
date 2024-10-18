/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 10:56:25 by rodralva          #+#    #+#             */
/*   Updated: 2024/10/18 13:03:57 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->nb_value = 0;
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