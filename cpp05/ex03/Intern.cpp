/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 16:24:00 by rodralva          #+#    #+#             */
/*   Updated: 2025/01/23 17:23:57 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

static AForm *makePresidential(std::string target)
{
	static PresidentialPardonForm form(target);
	return (&form);
}

static AForm *makeRobotomy(std::string target)
{
	static RobotomyRequestForm form(target);
	return (&form);
}

static AForm *makeShrubbery(std::string target)
{
	static ShrubberyCreationForm form(target);
	return (&form);
}

AForm	*Intern::makeForm(std::string name, std::string target)
{
	std::string	Form_name[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	AForm *(*functions[3])(std::string) =  {&makeShrubbery, &makeRobotomy, &makePresidential};

	for (int i = 0; i < 3; i++)
	{
		if (Form_name[i] == name)
			return (functions[i](target));
	}
	throw NoSuchForm();
}

Intern::Intern()
{
	std::cout << "standar Intern constructor called\n";
}

Intern::Intern(Intern const &copy)
{
	*this = copy;
}

Intern	&Intern::operator=(Intern const &copy)
{
	(void)copy;
	return (*this);
}

Intern::~Intern()
{
	std::cout << "standar Intern destructor called\n";
}