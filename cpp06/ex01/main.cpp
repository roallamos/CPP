/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 14:22:09 by rodralva          #+#    #+#             */
/*   Updated: 2025/02/02 14:28:14 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
	Data		persona = {"Pedro", 24};
	uintptr_t	ptr;
	Data		*persona_ptr;

	ptr = Serializer::serialize(&persona);
	std::cout << ptr << std::endl;
	persona_ptr = Serializer::deserialize(ptr);
	std::cout << "Name: " << persona_ptr->name << "\nAge: " << persona_ptr->age << "\n";
}