/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 12:03:47 by rodralva          #+#    #+#             */
/*   Updated: 2024/10/08 12:05:14 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include  "Contact.hpp"

class	Phonebook
{
private:
	int	current;
	int	nb_contacts;
 	Contact c[8];
public:
	
	Phonebook(void);
	~Phonebook(void);

	void	add(void);
	void	search(void);
	void	print_all_contacts(void);
	void	print_one_contact(void);
	void	check_fields(void);
	void	erase_contact(void);
};

#endif
