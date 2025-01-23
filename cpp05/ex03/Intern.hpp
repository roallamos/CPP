/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 16:24:02 by rodralva          #+#    #+#             */
/*   Updated: 2025/01/23 17:08:59 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
private:
	
public:

	class NoSuchForm: public std::exception {
		public:
			const char* what() const throw(){
				return ("Not a valid form\n");
			}
	};

	AForm	*makeForm(std::string name, std::string target);

	Intern();
	Intern(Intern const &);
	Intern	&operator=(Intern const &);
	~Intern();
};
