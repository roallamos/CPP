/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 13:11:56 by rodralva          #+#    #+#             */
/*   Updated: 2025/01/23 15:10:07 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "AForm.hpp"

class Bureaucrat
{
private:
	std::string const	name;
	int					grade;
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

	std::string getName() const;
	int getGrade() const;

	void	increaseGrade();
	void	decreaseGrade();
	void	signForm(AForm &f);
	void	executeForm(AForm const &f);

	Bureaucrat();
	Bureaucrat(std::string, int);
	Bureaucrat(const Bureaucrat &);
	Bureaucrat &operator=(const Bureaucrat &);
	~Bureaucrat();
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &to_print);

#endif