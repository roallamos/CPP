/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 20:23:29 by rodralva          #+#    #+#             */
/*   Updated: 2025/02/02 14:21:36 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

uintptr_t Serializer::serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}
Data *Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

Serializer::Serializer()
{
}

Serializer::Serializer(Serializer const &copy)
{
	(void)copy;
}

Serializer &Serializer::operator=(Serializer const &copy)
{
	(void) copy;
	return (*this);
}

Serializer::~Serializer()
{
}