/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 16:35:20 by rodralva          #+#    #+#             */
/*   Updated: 2025/01/22 10:22:53 by rodralva         ###   ########.fr       */
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
	file << "_________________¶¶¶¶¶¶¶¶\n\
_______________¶¶¶¶¶¶¶¶¶¶¶¶¶¶\n\
_________________¶¶¶¶¶¶¶¶¶¶____¶¶¶¶¶¶¶¶¶\n\
_________________¶¶¶¶¶¶¶¶¶__¶¶¶¶¶¶¶¶¶¶¶¶¶¶\n\
_______¶¶¶¶¶¶¶____¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶\n\
____¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶\n\
__¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶___________¶¶¶\n\
¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶______________¶¶\n\
¶¶¶¶¶¶¶¶¶______¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶\n\
___________¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶\n\
_______¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶__¶¶¶¶¶_______¶¶¶¶¶¶¶¶¶¶¶¶¶\n\
______¶¶¶¶¶¶¶¶¶¶¶________¶¶¶¶¶_________¶¶¶¶¶¶¶¶¶¶\n\
______¶¶¶¶¶¶¶¶¶__________¶¶¶¶¶¶_________¶¶¶¶¶¶¶¶¶\n\
______¶¶¶¶¶¶¶¶____________¶¶¶¶¶__________¶¶¶¶¶¶¶¶\n\
______¶¶¶¶¶¶______________¶¶¶¶¶¶__________¶¶¶¶¶¶¶\n\
______¶¶¶¶¶________________¶¶¶¶¶¶__________¶¶¶¶¶¶\n\
_______¶¶¶¶_________________¶¶¶¶¶¶__________¶¶¶¶¶\n\
_______¶¶__________________¶¶¶¶¶¶¶_________¶¶¶¶\n\
_______¶¶___________________¶¶¶¶¶¶¶_________¶¶\n\
_______¶____________________¶¶¶¶¶¶¶_________¶\n\
_____________________________¶¶¶¶¶¶\n\
_____________________________¶¶¶¶¶¶¶\n\
_____________________________¶¶¶¶¶¶¶\n\
___________________________¶¶¶¶¶¶¶¶¶¶\n\
________________________¶¶¶111¶¶¶¶¶¶¶\n\
_________________¶¶¶¶¶¶111111111¶¶¶¶¶¶¶\n\
_______________¶¶1111111111111111¶¶¶¶¶¶¶\n\
_____¶¶¶¶¶1111111111111¶1111¶¶¶¶¶¶¶1111¶¶¶\n\
__¶¶¶¶¶¶1111111111111111111¶¶11¶¶¶¶¶¶¶11¶¶¶¶\n\
¶¶1111111111111111111111110n¶¶¶¶¶¶¶¶¶¶¶¶¶¶\n\
11111111111111111111111111111¶¶¶¶¶¶¶¶¶¶¶¶¶¶\n";
	file.close();
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