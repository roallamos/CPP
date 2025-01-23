/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 11:55:30 by rodralva          #+#    #+#             */
/*   Updated: 2025/01/23 15:12:35 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
		ShrubberyCreationForm	perro("arbol");
		Bureaucrat	b("b", 1);
		b.signForm(perro);
		std::cout << perro;
		b.executeForm(perro);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		RobotomyRequestForm	perro("robot");
		Bureaucrat	b("b", 50);
		b.signForm(perro);
		std::cout << perro;
		b.executeForm(perro);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		PresidentialPardonForm	perro("evil_man");
		Bureaucrat	b("b", 1);
		b.signForm(perro);
		std::cout << perro;
		b.executeForm(perro);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}