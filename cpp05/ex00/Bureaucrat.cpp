/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 15:31:27 by rodralva          #+#    #+#             */
/*   Updated: 2025/01/20 19:05:47 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

std::string	Bureaucrat::getName() const
{
	return (this->name);
}

int	Bureaucrat::getGrade() const
{
	return (this->grade);
}

void	Bureaucrat::increaseGrade()
{
	if (this->getGrade() == 1)
		throw(GradeTooLowException());
	this->grade--;
}

void	Bureaucrat::decreaseGrade()
{
	if (this->getGrade() == 150)
		throw(GradeTooHighException());
	this->grade++;
}

Bureaucrat::Bureaucrat(): name(""), grade(150)
{
	std::cout << "standar constructor\n";
}

Bureaucrat::Bureaucrat(std::string new_name, int new_grade): name(new_name)
{
	std::cout << "string int constructor\n";

	if (new_grade < 1)
		throw(GradeTooLowException());
	if (new_grade > 150)
		throw(GradeTooHighException());
	this->grade = new_grade;
}

Bureaucrat::Bureaucrat( const Bureaucrat &copy)
{
	std::cout << "copy constructor\n";
	*this = copy;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &copy)
{
	this->grade = copy.grade;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "standar destructor\n";
}
std::ostream &operator<<(std::ostream &out, const Bureaucrat &to_print)
{
	out << to_print.getName() << ", bureaucrat grade " << to_print.getGrade();
	return (out);
}