/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 18:20:46 by rodralva          #+#    #+#             */
/*   Updated: 2025/01/20 19:54:33 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

std::string const	Form::getName() const
{
	return (this->_name);
}

bool	Form::getSignature() const
{
	return (this->_signature);
}

int const	Form::getSignatureGrade() const
{
	return (this->_signature_grade);
}

int const	Form::getExecGrade() const
{
	return (this->_exec_grade);
}

Form::Form(): _name(""), _signature(0), _signature_grade(150), _exec_grade(150)
{
	std::cout << "Form standar constructor\n";
}

Form::Form(std::string name, int const signature_grade, int const exec_grade): _name(name), _signature(0), _signature_grade(signature_grade), _exec_grade(exec_grade)
{
	std::cout << "Form constructor\n";
	if (this->_signature_grade < 1 || this->_exec_grade < 1)
		throw GradeTooLowException();
	if (this->_signature_grade > 150 || this->_exec_grade > 150)
		throw GradeTooHighException();
}

Form::Form(const Form &copy): _name(copy._name), _signature_grade(copy._signature_grade), _exec_grade(copy._exec_grade)
{
	std::cout << "Form copy constructor\n";
	*this = copy;
}

Form	&Form::operator=(const Form &copy)
{
	this->_signature = copy._signature;
	return (*this);
}


Form::~Form()
{
	std::cout << "Form destructor\n";
}

std::ostream &operator<<(std::ostream &out, const Form &to_print)
{
	out << to_print.getName() << "\n";
}