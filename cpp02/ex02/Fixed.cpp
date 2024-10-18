/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 10:56:25 by rodralva          #+#    #+#             */
/*   Updated: 2024/10/18 21:09:26 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int    Fixed::bits = 8;

Fixed::Fixed()
{
    this->nb_value = 0;
}
Fixed::Fixed(const Fixed &copy)
{
    (*this) = copy;
}

Fixed::Fixed(const int nb)
{
    this->nb_value = nb << this->bits;
}

Fixed::Fixed(const float nb) : nb_value(roundf(nb *(1 << bits)))
{
}

float Fixed::toFloat( void ) const
{
    return (static_cast<float>(this->nb_value) / (1 << this->bits));
}

int Fixed::toInt( void ) const
{
    return (this->nb_value >> this->bits);
}

Fixed& Fixed::operator=(const Fixed &copy)
{
    this->nb_value = copy.getRawBits();
    return (*this);
}

bool Fixed::operator>(const Fixed &f1) const
{
    if (this->getRawBits() > f1.getRawBits())
        return (1);
    return (0);
}

bool Fixed::operator<(const Fixed &f1) const
{
    if (this->getRawBits() < f1.getRawBits())
        return (1);
    return (0);
}

bool Fixed::operator>=(const Fixed &f1) const
{
    if (this->getRawBits() >= f1.getRawBits())
        return (1);
    return (0);
}

bool Fixed::operator<=(const Fixed &f1) const
{
    if (this->getRawBits() <= f1.getRawBits())
        return (1);
    return (0);
}

bool Fixed::operator==(const Fixed &f1) const
{
    if (this->getRawBits() == f1.getRawBits())
        return (1);
    return (0);
}

bool Fixed::operator!=(const Fixed &f1) const
{
    if (this->getRawBits() != f1.getRawBits())
        return (1);
    return (0);
}

Fixed Fixed::operator+(const Fixed &f1)
{
    Fixed   result;
    
    result.setRawBits(this->getRawBits() + f1.getRawBits());
    return (result);
}

Fixed Fixed::operator-(const Fixed &f1)
{
    Fixed   result;
    
    result.setRawBits(this->getRawBits() - f1.getRawBits());
    return (result);
}

Fixed Fixed::operator*(const Fixed &f1)
{
    Fixed   result;
    
    result.setRawBits((this->toFloat() * f1.toFloat()) * (1 << bits));
    return (result);
}

Fixed Fixed::operator/(const Fixed &f1)
{
    Fixed   result;
    
    result.setRawBits((this->toFloat() / f1.toFloat()) * (1 << bits));
    return (result);
}

Fixed &Fixed::operator++(void)
{
    this->nb_value++;
    return((*this));
}

Fixed &Fixed::operator--(void)
{
    this->nb_value--;
    return((*this));
}

Fixed Fixed::operator++(int)
{
    Fixed   old_fix;

    old_fix = (*this);
    this->nb_value++;
    return(old_fix);
}

Fixed Fixed::operator--(int)
{
    Fixed   old_fix;

    old_fix = (*this);
    this->nb_value--;
    return(old_fix);
}

Fixed &Fixed::min(Fixed &f1, Fixed &f2)
{
    if (f1 > f2)
        return (f2);
    return (f1);
}
Fixed &Fixed::max(Fixed &f1, Fixed &f2)
{
    if (f1 < f2)
        return (f2);
    return (f1);
}
const Fixed &Fixed::min(const Fixed &f1, const Fixed &f2)
{
    if (f1 > f2)
        return (f2);
    return (f1);
}
const Fixed &Fixed::max(const Fixed &f1, const Fixed &f2)
{
    if (f1 < f2)
        return (f2);
    return (f1);
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