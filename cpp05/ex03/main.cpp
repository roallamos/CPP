/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 11:55:30 by rodralva          #+#    #+#             */
/*   Updated: 2025/01/23 18:13:09 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"
#include <unistd.h>


int main()
{
	Intern	nobody;
	try
	{
		AForm *perro = nobody.makeForm("robotomy request", "arbol");
		Bureaucrat	b("b", 1);
		b.signForm(*perro);
		std::cout << *perro;
		b.executeForm(*perro);
		std::cout << "\n\n\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		AForm *perro = nobody.makeForm("shrubbery creation", "arbol");
		Bureaucrat	b("b", 1);
		b.signForm(*perro);
		std::cout << *perro;
		b.executeForm(*perro);
		std::cout << "\n\n\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		AForm *perro = nobody.makeForm("presidential pardon", "arbol");
		Bureaucrat	b("b", 1);
		b.signForm(*perro);
		std::cout << *perro;
		b.executeForm(*perro);
		std::cout << "\n\n\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}