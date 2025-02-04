/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 18:17:23 by rodralva          #+#    #+#             */
/*   Updated: 2025/02/04 18:30:04 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename T> void swap(T &a, T &b)
{
	T	temp;
	temp = a;
	a = b;
	b = temp;
}

template <typename T> T min(T a, T b)
{
	if (a < b)
		return (a);
	return (b);
}

template <typename T> T max(T a, T b)
{
	if (a > b)
		return (a);
	return (b);
}

#endif