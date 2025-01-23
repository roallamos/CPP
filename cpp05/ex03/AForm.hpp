/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 18:21:08 by rodralva          #+#    #+#             */
/*   Updated: 2025/01/21 19:27:03 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <fstream>


class Bureaucrat;

class AForm
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
	void		setSignature(bool);
	int			getSignatureGrade() const;
	int			getExecGrade() const;

	void	beSigned(Bureaucrat);
	virtual void	execute(Bureaucrat const &executor) const;
	virtual	void	child_exec() const = 0;

	AForm();
	AForm(const AForm &);
	AForm(std::string name, int const signature, int const exec);
	AForm &operator=(const AForm &);
	~AForm();
};

std::ostream &operator<<(std::ostream &out, const AForm &to_print);

#endif