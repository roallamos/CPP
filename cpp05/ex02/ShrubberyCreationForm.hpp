/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 16:35:23 by rodralva          #+#    #+#             */
/*   Updated: 2025/01/21 19:29:14 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define  SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include "AForm.hpp"
# include <fcntl.h>


class ShrubberyCreationForm : public AForm
{
private:
	std::string	_target;
public:

	void	child_exec() const;

	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string tar);
	ShrubberyCreationForm(const ShrubberyCreationForm &);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &);
	~ShrubberyCreationForm();
};


#endif