/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 20:17:54 by rodralva          #+#    #+#             */
/*   Updated: 2025/02/02 14:35:31 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>

struct Data
{
	std::string name;
	int			age;
};

class Serializer
{
private:
	
public:
	Serializer();
	Serializer(Serializer const &);
	Serializer &operator=(Serializer const &);
	virtual ~Serializer() = 0;

	static uintptr_t serialize(Data* ptr);
	static Data *deserialize(uintptr_t raw);
};
