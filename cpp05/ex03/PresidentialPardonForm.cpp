/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 16:35:20 by rodralva          #+#    #+#             */
/*   Updated: 2025/01/23 15:05:44 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

void	PresidentialPardonForm::child_exec() const
{
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox\n";
}

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5)
{
	std::cout << "standar PresidentialPardonForm constructor called\n";
}

PresidentialPardonForm::PresidentialPardonForm(std::string tar) : AForm("PresidentialPardonForm", 25, 5)
{
	std::cout << "target PresidentialPardonForm constructor called\n";
	this->_target = tar;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : AForm(copy.getName(), 25, 5)
{
	std::cout << "copy PresidentialPardonForm constructor called\n";
	this->setSignature(copy.getSignature());
	this->_target = copy._target;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &copy)
{
	this->setSignature(copy.getSignature());
	this->_target = copy._target;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destructor called\n";
}