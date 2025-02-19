/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 10:10:39 by rodralva          #+#    #+#             */
/*   Updated: 2025/02/19 12:48:28 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <algorithm>
# include <vector>
# include <list>
# include <set>

class noFound : public std::exception{
	public:
		virtual const char *what() const throw()
		{
			return ("not found");
		}
};

template <typename T> void easyfind(T &container, int i)
{
	typename T::const_iterator it;
	
	it = std::find(container.begin(), container.end(), i);
	if (it == container.end())
		throw noFound();
	std::cout << "found\n";
}
