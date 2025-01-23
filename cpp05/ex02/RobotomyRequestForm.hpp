/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 16:35:23 by rodralva          #+#    #+#             */
/*   Updated: 2025/01/23 14:57:06 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define  ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include "AForm.hpp"
# include <cstdlib>


class RobotomyRequestForm : public AForm
{
private:
	std::string	_target;
public:

	void	child_exec() const;

	RobotomyRequestForm();
	RobotomyRequestForm(std::string tar);
	RobotomyRequestForm(const RobotomyRequestForm &);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &);
	~RobotomyRequestForm();
};


#endif