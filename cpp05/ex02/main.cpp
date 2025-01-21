/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 11:55:30 by rodralva          #+#    #+#             */
/*   Updated: 2025/01/21 19:07:25 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	try
	{
		ShrubberyCreationForm	perro("arbol");
		Bureaucrat	b("b", 1);
		b.signForm(perro);
		std::cout << perro;
		perro.execute(b);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}