/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodralva <rodralva@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:20:59 by rodralva          #+#    #+#             */
/*   Updated: 2024/10/14 20:34:33 by rodralva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <iostream>
# include <fstream>

class replacer
{
private:
    std::string s1;
    std::string s2;
    std::string file_name;
public:
    replacer(std::string ,std::string);
    ~replacer();
    void    Setfilename(std::string);
    const std::string    GetFilename();
    std::string    GetS1();
    std::string    GetS2();
    void    replace(std::string);
};

std::string     read_file(char *argv[]);

#endif