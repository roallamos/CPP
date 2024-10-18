/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */ 
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 10:50:10 by rodralva          #+#    #+#             */
/*   Updated: 2024/10/18 15:13:22 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <math.h> 

class Fixed
{
private:
    int                 nb_value;
    static const int    bits;
public:
    Fixed();
    Fixed( const Fixed & );
    Fixed( const int );
    Fixed( const float );
    ~Fixed();
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    float toFloat( void ) const;
    int toInt( void ) const;
    Fixed& operator=(const Fixed &copy);
    bool operator>(const Fixed &f1) const;
    bool operator<(const Fixed &f1) const;
    bool operator>=(const Fixed &f1) const;
    bool operator<=(const Fixed &f1) const;
    bool operator==(const Fixed &f1) const;
    bool operator!=(const Fixed &f1) const;
    Fixed operator+(const Fixed &f1);
    Fixed operator-(const Fixed &f1);
    Fixed operator*(const Fixed &f1);
    Fixed operator/(const Fixed &f1);
    Fixed &operator++(void);
    Fixed &operator--(void);
    Fixed operator++(int);
    Fixed operator--(int);

    Fixed &min(Fixed &, Fixed &);
    Fixed &max(Fixed &, Fixed &);
    const Fixed &min(const Fixed &, const Fixed &);
    const Fixed &max(const Fixed &, const Fixed &);

    
};

    std::ostream &operator<<( std::ostream &, const Fixed &);
#endif