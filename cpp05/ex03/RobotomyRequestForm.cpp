/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 16:35:20 by rodralva          #+#    #+#             */
/*   Updated: 2025/01/23 18:10:53 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include <sys/time.h>

void	RobotomyRequestForm::child_exec() const
{
	std::srand(time(NULL));
	if (std::rand() % 2)
		std::cout << this->_target << " has been robotomized successfully\n";
	else
		std::cout << "robotomy failed\n";
}

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
	std::cout << "standar RobotomyRequestForm constructor called\n";
}

RobotomyRequestForm::RobotomyRequestForm(std::string tar) : AForm("RobotomyRequestForm", 72, 45)
{
	std::cout << "target RobotomyRequestForm constructor called\n";
	this->_target = tar;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : AForm(copy.getName(), 72, 45)
{
	std::cout << "copy RobotomyRequestForm constructor called\n";
	this->setSignature(copy.getSignature());
	this->_target = copy._target;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{
	this->setSignature(copy.getSignature());
	this->_target = copy._target;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "ShrubberyCreationForm destructor called\n";
}