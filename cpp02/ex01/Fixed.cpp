/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 10:56:25 by rodralva          #+#    #+#             */
/*   Updated: 2024/10/18 16:44:00 by rodralva         ###   ########.fr       */
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

Fixed::Fixed(const int nb)
{
    this->nb_value = nb << this->bits;
}

Fixed::Fixed(const float nb)
{
    this->nb_value = static_cast<int>(nb) << this->bits;
}

float Fixed::toFloat( void ) const
{
    return (this->nb_value >> this->bits);
}

int Fixed::toInt( void ) const
{
    return (this->nb_value >> this->bits);
}

Fixed& Fixed::operator=(Fixed &copy)
{
    this->nb_value = copy.getRawBits();
    return (*this);
}

std::ostream	&operator<<(std::ostream &os, const Fixed &fix)
{
    os << fix.toFloat();
    return (os);
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