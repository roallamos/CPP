/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 10:50:10 by rodralva          #+#    #+#             */
/*   Updated: 2024/10/18 13:01:55 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
    int                 nb_value;
    static const int    bits = 8;
public:
    Fixed();
    Fixed( Fixed &);
    Fixed& operator=(Fixed &copy);
    ~Fixed();
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};

#endif