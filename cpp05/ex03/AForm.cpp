/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 18:20:46 by rodralva          #+#    #+#             */
/*   Updated: 2025/01/28 16:02:50 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

std::string	AForm::getName() const
{
	return (this->_name);
}

bool	AForm::getSignature() const
{
	return (this->_signature);
}

void	AForm::setSignature(bool s)
{
	this->_signature = s;
}

int	AForm::getSignatureGrade() const
{
	return (this->_signature_grade);
}

int	AForm::getExecGrade() const
{
	return (this->_exec_grade);
}

AForm::AForm(): _name(""), _signature(0), _signature_grade(150), _exec_grade(150)
{
	std::cout << "AForm standar constructor\n";
}

AForm::AForm(std::string name, int const signature_grade, int const exec_grade): _name(name), _signature(0), _signature_grade(signature_grade), _exec_grade(exec_grade)
{
	std::cout << "AForm constructor\n";
	if (this->_signature_grade < 1 || this->_exec_grade < 1)
		throw GradeTooLowException();
	if (this->_signature_grade > 150 || this->_exec_grade > 150)
		throw GradeTooHighException();
}

AForm::AForm(const AForm &copy): _name(copy._name), _signature_grade(copy._signature_grade), _exec_grade(copy._exec_grade)
{
	std::cout << "AForm copy constructor\n";
	*this = copy;
}

AForm	&AForm::operator=(const AForm &copy)
{
	this->_signature = copy._signature;
	return (*this);
}


AForm::~AForm()
{
	std::cout << "AForm destructor\n";
}

std::ostream &operator<<(std::ostream &out, const AForm &to_print)
{
	out << "AForm name: "<< to_print.getName() << "\n"
		<< "Signed: "<< to_print.getSignature() << "\n"
		<< "Signature grade needed: "<< to_print.getSignatureGrade() << "\n"
		<< "Execution grade needed: "<< to_print.getExecGrade() << "\n";
	return (out);
}

void	AForm::beSigned(Bureaucrat bur)
{
	if (bur.getGrade() <= this->getSignatureGrade())
		this->_signature = true;
	else
		throw GradeTooLowException();
}

void	AForm::execute(Bureaucrat const &executor) const
{
	if (!this->getSignature())
	{
		std::cout << "Form is not signed\n";
		throw NotSignedForm();
	}
	if (executor.getGrade() > this->getExecGrade())
		throw GradeTooLowException();
	child_exec();
}