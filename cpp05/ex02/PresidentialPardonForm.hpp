/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 16:35:23 by rodralva          #+#    #+#             */
/*   Updated: 2025/01/23 15:03:15 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define  PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include "AForm.hpp"
# include <fcntl.h>


class PresidentialPardonForm : public AForm
{
private:
	std::string	_target;
public:

	void	child_exec() const;

	PresidentialPardonForm();
	PresidentialPardonForm(std::string tar);
	PresidentialPardonForm(const PresidentialPardonForm &);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &);
	~PresidentialPardonForm();
};


#endif