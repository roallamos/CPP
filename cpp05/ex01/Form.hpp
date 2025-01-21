/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 18:21:08 by rodralva          #+#    #+#             */
/*   Updated: 2025/01/21 14:43:04 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

class Bureaucrat;

class Form
{
private:
	std::string const	_name;
	bool				_signature;
	int const			_signature_grade;
	int const			_exec_grade;
public:
	class GradeTooHighException: public std::exception {
		public:
			const char* what() const throw(){
				return ("Grade too high\n");
			}
	};
	
	class GradeTooLowException: public std::exception {
		public:
			const char* what() const throw(){
				return ("Grade too low\n");
			}
	};

	std::string	getName() const;
	bool		getSignature() const;
	int			getSignatureGrade() const;
	int			getExecGrade() const;

	void	beSigned(Bureaucrat);

	Form();
	Form(const Form &);
	Form(std::string, int const, int const);
	Form &operator=(const Form &);
	~Form();
};

std::ostream &operator<<(std::ostream &out, const Form &to_print);

#endif