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
    Fixed& operator=(const Fixed &copy);
    ~Fixed();
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    float toFloat( void ) const;
    int toInt( void ) const;
};

    std::ostream &operator<<( std::ostream &, const Fixed &);
#endif



/* 

00000000 00000000 00000000 00000001 --> int 



00000000 00000000 00000001 00000000 --> Fixed 

Fixed = 1 << bits


0, 0000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000 




 */