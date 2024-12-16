/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:13:30 by rodralva          #+#    #+#             */
/*   Updated: 2024/10/25 11:06:20 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
protected:
    std::string _ideas[100];
public:
    Brain();
    Brain(const Brain &copy);
    Brain &operator=(const Brain &copy);
    ~Brain();
    void setIdeas(std::string idea);
    void printIdeas() const;
};

#endif