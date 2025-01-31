/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 17:57:43 by rodralva          #+#    #+#             */
/*   Updated: 2025/01/31 15:20:36 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string.h>
# include <stdlib.h>
# include <iomanip>
# include <cstdlib>

class ScalarConverter
{
private:
	
public:
	ScalarConverter();
	ScalarConverter(ScalarConverter const &copy);
	ScalarConverter &operator=(ScalarConverter const &copy);
	virtual ~ScalarConverter() = 0;

	static void	convert(std::string literal);
};


#endif