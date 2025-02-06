/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 18:41:58 by rodralva          #+#    #+#             */
/*   Updated: 2025/02/06 11:37:18 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>


template <typename T> void f(T a)
{
	std::cout << a << std::endl;
}

template <typename T> void iter(T ptr[], int size, void (*f)(T))
{
	for (int i = 0; i < size; i++)
		f(ptr[i]);
}

#endif