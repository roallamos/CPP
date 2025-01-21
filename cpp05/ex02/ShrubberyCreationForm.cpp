/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 16:35:20 by rodralva          #+#    #+#             */
/*   Updated: 2025/01/21 19:28:39 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

void	ShrubberyCreationForm::child_exec() const
{
	std::string		name = this->_target + "_shrubbery";
	std::fstream	file;
	file.open(name.c_str(), std::ios::in | std::ios::out | std::ios::trunc);
	if (!file.is_open())
	{
		std::cout << "could not create file\n";
		return ;
	}
}

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
{
	std::cout << "standar ShrubberyCreationForm constructor called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string tar) : AForm("ShrubberyCreationForm", 145, 137)
{
	std::cout << "target ShrubberyCreationForm constructor called\n";
	this->_target = tar;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm(copy.getName(), 145, 137)
{
	std::cout << "copy ShrubberyCreationForm constructor called\n";
	this->setSignature(copy.getSignature());
	this->_target = copy._target;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
	this->setSignature(copy.getSignature());
	this->_target = copy._target;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor called\n";
}