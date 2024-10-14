/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:20:59 by rodralva          #+#    #+#             */
/*   Updated: 2024/10/14 13:02:10 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <iostream>
# include <fstream>

std::ofstream   create_outfile(char *argv[]);
void            replace(char *argv[], std::string str, std::ofstream outfile);
std::string     read_file(char *argv[]);

#endif